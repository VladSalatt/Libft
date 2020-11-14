/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:37:13 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:37:17 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str, const char *tail)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str);
	while (tail[i] != '\0')
	{
		str[j] = tail[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
