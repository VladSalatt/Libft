/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:33:23 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:33:26 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char		*ft_itoa_neg(long long nn)
{
	int			len;
	char		*str;
	int			i;
	int long	n;

	n = nn;
	n = -n;
	len = ft_numblen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = len;
	str[len + 1] = '\0';
	while (n != 0)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	str[0] = '-';
	return (str);
}

char			*ft_itoa(long long n)
{
	int		len;
	char	*str;
	int		i;

	if (n < 0)
		return (str = ft_itoa_neg(n));
	len = ft_numblen(n);
	str = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	i = len - 1;
	while (n != 0)
	{
		str[i] = n % 10 + 48;
		i--;
		n /= 10;
	}
	return (str);
}
