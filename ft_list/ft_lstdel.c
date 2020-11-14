/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 21:38:19 by ebulwer           #+#    #+#             */
/*   Updated: 2019/12/06 20:19:29 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list				*tmp;

	while (*alst != NULL)
		ft_lstdelhead(alst, del);
}
