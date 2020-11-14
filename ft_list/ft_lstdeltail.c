/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdeltail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:37:34 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:33:28 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdeltail(t_list **alst, void (*del)(void *, size_t))
{
	while ((*alst)->next != NULL)
		alst = &(*alst)->next;
	ft_lstdelone(alst, del);
}
