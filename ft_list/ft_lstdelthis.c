/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelthis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:04:21 by ebulwer           #+#    #+#             */
/*   Updated: 2019/12/04 22:01:27 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdelthis(t_list **alst, size_t lstnum, \
											void (*del)(void *, size_t))
{
	t_list			*tmp;

	while (*alst != NULL && lstnum)
	{
		alst = &(*alst)->next;
		lstnum--;
	}
	if (lstnum == 0 && *alst != NULL)
		ft_lstdelhead(alst, del);
}
