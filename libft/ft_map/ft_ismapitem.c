/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismapitem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:01:39 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:01:42 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

int						ft_ismapitem(t_map *map, const char *key)
{
	int					hash;
	int					(*hash_func)(const char *, int);
	t_hlist				**tmp;

	if (key == NULL)
		return (-1);
	hash_func = map->hashfunc;
	hash = hash_func(key, map->size);
	tmp = &(map->head[hash]);
	if (*tmp == NULL)
		return (-1);
	while (*tmp != NULL)
	{
		if (ft_strcmp((const char *)(*tmp)->key, key) == 0)
			return (hash);
		if ((*tmp)->next == NULL)
			break ;
		tmp = &((*tmp)->next);
	}
	return (-1);
}
