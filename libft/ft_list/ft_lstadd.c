/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:00:10 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:00:12 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void				ft_lstadd(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}