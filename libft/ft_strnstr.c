/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:44:11 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:44:14 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t length;

	length = ft_strlen(s2);
	if (length == 0)
		return ((char *)s1);
	while (*s1 != '\0' && n-- >= length)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, length) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
