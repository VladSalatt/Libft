/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:31:44 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:31:47 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
	return ((void *)str);
}
