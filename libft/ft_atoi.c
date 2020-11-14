/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:31:36 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:31:39 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int			ft_atoi(const char *str)
{
	unsigned long	sign;
	unsigned long	nb;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nb = 0;
	while (ft_isdigit(*str))
	{
		nb = nb * 10 + *str - '0';
		if (nb > 9223372036854775)
		{
			if (sign == (unsigned long)-1)
				return (0);
			return (-1);
		}
		str++;
	}
	return ((int)(sign * nb));
}
