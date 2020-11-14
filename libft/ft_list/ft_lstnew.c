/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:00:42 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:00:44 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list				*ft_lstnew(const char *content)
{
	t_list				*list;

	if ((list = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	list->content = ft_strdup(content);
	list->next = NULL;
	return (list);
}
