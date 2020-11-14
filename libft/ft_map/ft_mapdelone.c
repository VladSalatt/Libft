/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:02:52 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:02:53 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

void					ft_mapdelone(t_map *map, const char *key)
{
	int					hash;
	int					(*hash_func)(const char *, int);
	t_hlist				**tmp;

	hash_func = map->hashfunc;
	hash = hash_func(key, map->size);
	tmp = &(map->head[hash]);
	if (*tmp == NULL)
		return ;
	while (*tmp != NULL)
	{
		if (ft_strcmp((const char *)(*tmp)->key, key) == 0)
		{
			map->head[hash] = ht_listdelone(map->head[hash], *tmp);
			return ;
		}
		if ((*tmp)->next == NULL)
			return ;
		tmp = &((*tmp)->next);
	}
}
