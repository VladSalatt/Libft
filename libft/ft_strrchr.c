/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:45:52 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:45:54 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i--;
	}
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
