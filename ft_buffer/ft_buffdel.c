/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 12:36:22 by ebulwer           #+#    #+#             */
/*   Updated: 2019/11/19 16:18:29 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_buffdel(t_buff **buff)
{
	ft_strdel(&((*buff)->line));
	(*buff)->size = 0;
	(*buff)->totalsize = 0;
	(*buff)->additional_size = 0;
	free(*buff);
	buff = NULL;
}
