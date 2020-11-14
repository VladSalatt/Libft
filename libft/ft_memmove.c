/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:34:47 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:34:51 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	size_t			i;

	str_dst = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	if (str_dst == str_src)
		return (str_dst);
	if (str_dst < str_src)
	{
		i = -1;
		while (++i < len)
			str_dst[i] = str_src[i];
	}
	else
	{
		i = len - 1;
		while (i + 1)
		{
			str_dst[i] = str_src[i];
			i--;
		}
	}
	return (str_dst);
}