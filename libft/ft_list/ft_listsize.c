/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:59:59 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:00:02 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int					ft_listsize(t_list *head)
{
	t_list			*tmp;
	int				len;

	tmp = head;
	len = 0;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
