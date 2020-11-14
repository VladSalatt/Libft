/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 19:40:07 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:36:46 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"
#include "libft.h"

void					ft_putmap(t_map *map, void (*printvalue)(void *))
{
	size_t				i;
	t_list				*tmp;

	i = 0;
	while (i < map->size)
	{
		tmp = map->array[i];
		if (tmp == NULL)
			ft_printf("[%d] (null)\n", i);
		else
		{
			while (tmp != NULL)
			{
				ft_printf("[%d] ", i);
				print_htab(tmp->content, printvalue);
				tmp = tmp->next;
			}
		}
		i++;
	}
}
