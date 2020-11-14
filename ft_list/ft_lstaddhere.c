/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddhere.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:40:31 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:33:06 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstaddhere(t_list **alst, t_list *new, size_t position)
{
	while (*alst != NULL && position)
	{
		alst = &(*alst)->next;
		position--;
	}
	if (position == 0)
	{
		new->next = *alst;
		*alst = new;
	}
}
