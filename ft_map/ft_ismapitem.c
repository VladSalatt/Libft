/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismapitem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:41:43 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/20 12:19:44 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_map.h"

int					ft_ismapitem(t_map *map, const char *key)
{
	t_list			*maplst;
	int				(*hashfunc)(const char *, int);

	hashfunc = map->hashfunc;
	maplst = map->array[hashfunc(key, map->size)];
	while (maplst != NULL)
	{
		if (ft_strequ(((t_htab *)(maplst->content))->key, key))
			return (1);
		maplst = maplst->next;
	}
	return (0);
}
