/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:34:02 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:34:05 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	i++;
	str = (unsigned char *)arr;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
