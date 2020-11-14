/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapdelkey.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:20:57 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:36:25 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_map.h"

static void			dellst(void *content, size_t content_size)
{
	ft_strdel(&(((t_htab *)content)->key));
	content_size = 0;
	free(content);
	content = NULL;
}

void				ft_mapdelkey(t_map **map, const char *key)
{
	int				(*hashfunc)(const char *, int);
	void			(*valuedel)(void **);
	t_list			**maplst;
	t_list			*tmp;

	hashfunc = (*map)->hashfunc;
	maplst = &((*map)->array[hashfunc(key, (*map)->size)]);
	valuedel = (*map)->valuedel_func;
	while (*maplst != NULL)
	{
		if (ft_strequ(((t_htab *)((*maplst)->content))->key, key))
		{
			valuedel(&(((t_htab *)((*maplst)->content))->value));
			tmp = (*maplst)->next;
			ft_lstdelone(maplst, dellst);
			*maplst = tmp;
			(*map)->numof_items--;
			return ;
		}
		maplst = &(*maplst)->next;
	}
}
