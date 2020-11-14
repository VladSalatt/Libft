/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getvalue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:01:14 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:01:16 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

const char			*ft_mapvalue(const t_map *map, const char *key)
{
	int					hash;
	int					(*hash_func)(const char *, int);
	t_hlist				*tmp;

	hash_func = map->hashfunc;
	hash = hash_func(key, map->size);
	tmp = map->head[hash];
	if (tmp == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		if (ft_strcmp((const char *)tmp->key, key) == 0)
			return ((const char *)tmp->value);
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (NULL);
}
