/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:33:53 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:33:55 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	size_t			i;

	i = 0;
	str_dst = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	while (i < n)
	{
		str_dst[i] = str_src[i];
		if (str_src[i] == (unsigned char)c)
			return (str_dst + i + 1);
		i++;
	}
	return (NULL);
}
