/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:15:43 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:36:39 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_map.h"

void				ft_mapinsert(t_map **map, const char *key, void *value)
{
	t_list			**maplst;
	void			(*valuedel)(void **);
	int				(*hashfunc)(const char *, int);

	hashfunc = (*map)->hashfunc;
	maplst = &((*map)->array[hashfunc(key, (*map)->size)]);
	while (*maplst != NULL)
	{
		if (ft_strequ(((t_htab *)((*maplst)->content))->key, key))
		{
			valuedel = (*map)->valuedel_func;
			valuedel(&(((t_htab *)((*maplst)->content))->value));
			((t_htab *)((*maplst)->content))->value = value;
			return ;
		}
		maplst = &(*maplst)->next;
	}
	*maplst = ft_lstnew(init_htab(key, value), sizeof(t_htab *));
	(*map)->numof_items++;
	if (((*map)->numof_items / (double)(*map)->size) > 0.6)
		map_reindexing(map);
}
