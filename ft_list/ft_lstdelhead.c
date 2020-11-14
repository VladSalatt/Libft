/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelhead.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:51:52 by ebulwer           #+#    #+#             */
/*   Updated: 2019/12/06 20:20:10 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdelhead(t_list **alst, void (*del)(void *, size_t))
{
	t_list				*tmp;

	tmp = (*alst)->next;
	ft_lstdelone(alst, del);
	*alst = tmp;
}
