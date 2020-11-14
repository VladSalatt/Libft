/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_part.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:09:33 by ebulwer           #+#    #+#             */
/*   Updated: 2019/08/07 12:44:02 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

t_part				*init_part(void)
{
	t_part			*part;

	if ((part = (t_part *)malloc(sizeof(t_part))) == NULL)
		exit(-1);
	part->first = NULL;
	part->middle = NULL;
	part->last = NULL;
	part->is_neg = 0;
	return (part);
}

void				partdel(t_part **part)
{
	if ((*part)->first != NULL)
		ft_strdel(&((*part)->first));
	if ((*part)->last != NULL)
		ft_strdel(&((*part)->last));
	if ((*part)->middle != NULL)
		ft_buffdel(&((*part)->middle));
	free(*part);
	part = NULL;
}
