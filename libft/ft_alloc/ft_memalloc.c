/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:54:10 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:54:12 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_alloc.h"

void	*ft_memalloc(size_t size)
{
	void *arr;

	arr = malloc(size);
	if (arr == NULL)
		return (NULL);
	else
		return (ft_memset(arr, '\0', size));
}
