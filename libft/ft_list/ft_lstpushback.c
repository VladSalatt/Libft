/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:00:51 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:00:53 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void				ft_lstpushback(t_list **head, t_list *new)
{
	t_list			*tmp;

	if (new == NULL)
		return ;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = new;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
