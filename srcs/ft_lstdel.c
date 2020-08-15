/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:45:43 by ebulwer           #+#    #+#             */
/*   Updated: 2020/02/04 20:45:45 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst1;
	t_list *lst2;

	if (!alst)
		return ;
	lst2 = *alst;
	while (lst2)
	{
		lst1 = lst2->next;
		del(lst2->content, lst2->content_size);
		free(lst2);
		lst2 = lst1;
	}
	*alst = NULL;
}
