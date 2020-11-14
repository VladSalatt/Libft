/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 15:23:33 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:34:02 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstpushback(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	while (*alst != NULL)
		alst = &(*alst)->next;
	*alst = new;
}
