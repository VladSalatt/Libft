/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addsymb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:30:55 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:30:58 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_addsymb(char *str, char c, int num)
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
	newstr = (char *)ft_memalloc(sizeof(char) * len);
	while (i < num)
	{
		newstr[i] = c;
		i++;
	}
	while (str[j] != '\0')
	{
		newstr[i] = str[j];
		j++;
		i++;
	}
	newstr[i] = '\0';
	ft_strdel(&str);
	return (newstr);
}
