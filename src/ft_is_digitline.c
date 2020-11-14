/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_digitline.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 13:01:53 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:38:15 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_is_digitline(const char *line)
{
	size_t			i;

	i = 0;
	while (line[i] != 0)
	{
		if (!ft_isdigit(line[i]) && line[i] != '+' && line[i] != '-')
			return (0);
		i++;
	}
	return (1);
}
