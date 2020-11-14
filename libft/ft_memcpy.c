/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:34:34 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:34:36 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	size_t			i;

	i = 0;
	str_dst = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	if (str_dst == str_src)
		return (str_dst);
	while (i < n)
	{
		if (str_src[i] == '\0')
			str_dst[i] = '\0';
		str_dst[i] = str_src[i];
		i++;
	}
	return (str_dst);
}
