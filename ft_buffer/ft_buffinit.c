/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 21:10:54 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/14 21:10:56 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buff					*ft_buffinit(size_t size)
{
	t_buff				*buff;

	if (size == 0)
		return (NULL);
	if ((buff = (t_buff *)malloc(sizeof(t_buff))) == NULL)
		exit(-1);
	buff->additional_size = size;
	buff->totalsize = size;
	if ((buff->line = (char *)ft_memalloc(sizeof(char) * buff->totalsize)) \
										== NULL)
		exit(-1);
	buff->size = 0;
	return (buff);
}
