/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:53:17 by ebulwer           #+#    #+#             */
/*   Updated: 2019/12/04 22:08:21 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putlst(t_list *alst, void (*print)(void *))
{
	size_t			i;

	i = 0;
	if (alst == NULL)
	{
		ft_putendl("(empty list)");
		return ;
	}
	while (alst != NULL)
	{
		ft_printf("[%zu] content:\n[\n  ", i++);
		print(alst->content);
		ft_printf("\n]");
		ft_printf("\ncontent_size: %d\n\n", alst->content_size);
		alst = alst->next;
	}
}
