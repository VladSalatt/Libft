/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reindexing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:59:39 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/12 12:59:39 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../ft_map.h"

static void			dellst(void *content, size_t content_size)
{
	ft_strdel(&(((t_htab *)content)->key));
	((t_htab *)content)->value = NULL;
	content_size = 0;
	free(content);
	content = NULL;
}

void				map_reindexing(t_map **map)
{
	t_map			*newmap;
	t_list			**maplst;
	size_t			i;

	newmap = ft_mapinit(((*map)->size * EXPANSION_COEFFICIENT), \
		(*map)->hashfunc, (*map)->valuedel_func);
	i = 0;
	while (i < (*map)->size)
	{
		maplst = &((*map)->array[i]);
		while (*maplst != NULL)
		{
			ft_mapinsert(&newmap, \
				((const char *)((t_htab *)((*maplst)->content))->key), \
					((t_htab *)((*maplst)->content))->value);
			ft_lstdelthis(maplst, 0, dellst);
		}
		i++;
	}
	free((*map)->array);
	(*map)->array = NULL;
	(*map)->size = 0;
	(*map)->valuedel_func = NULL;
	free(*map);
	*map = newmap;
}
