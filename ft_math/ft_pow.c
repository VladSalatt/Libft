/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 13:55:46 by ebulwer           #+#    #+#             */
/*   Updated: 2019/08/07 12:35:38 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int num, int power)
{
	int tot;

	tot = num;
	if (power < 0)
		return (-1);
	if (power == 0)
		return (1);
	if (power == 1)
		return (num);
	while (power-- != 1)
		tot *= num;
	return (tot);
}
