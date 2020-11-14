/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_date.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:55:46 by ebulwer           #+#    #+#             */
/*   Updated: 2019/08/07 12:43:52 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void				print_date(void)
{
	time_t			ttime;
	char			*time_str;

	ttime = time(NULL);
	time_str = ft_ctime(&ttime);
	ft_buffadd(g_output, time_str);
	ft_strdel(&time_str);
}
