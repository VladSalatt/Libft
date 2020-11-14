/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:54:29 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:54:31 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_alloc.h"

void				*ft_realloc(void *ptr, size_t newsize)
{
	char			*new_ptr;

	if ((new_ptr = (char *)ft_memalloc(sizeof(char) * (newsize + 1))) == NULL)
		return (NULL);
	new_ptr = ft_strcpy(new_ptr, ptr);
	ft_memdel(&ptr);
	return (new_ptr);
}
