/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:43:02 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:43:05 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str, const char *tail, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str);
	while (i < n)
	{
		if (tail[i] == '\0')
			break ;
		str[j] = tail[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
