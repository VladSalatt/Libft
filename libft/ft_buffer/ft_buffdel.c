/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:57:30 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:57:32 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buffer.h"

void					ft_buffdel(t_buff **buff)
{
	ft_strdel(&((*buff)->str));
	(*buff)->i = 0;
	(*buff)->totalsize = 0;
	(*buff)->additional_size = 0;
	free(*buff);
	buff = NULL;
}
