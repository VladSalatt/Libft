/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addsymbend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:31:08 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:31:11 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_addsymbend(char *str, char c, int num)
{
	int		i;
	int		j;
	int		len;
	char	*newstr;

	i = 0;
	j = 0;
	if (num < 0)
		return (NULL);
	len = ft_strlen(str) + num;
	newstr = (char *)ft_memalloc(len);
	while (str[j] != '\0')
	{
		newstr[i] = str[j];
		j++;
		i++;
	}
	while (i < len)
	{
		newstr[i] = c;
		i++;
	}
	newstr[i] = '\0';
	ft_strdel(&str);
	return (newstr);
}
