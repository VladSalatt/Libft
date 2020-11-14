/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 13:07:21 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:37:19 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_round_up(float num)
{
	float				res;

	res = num - (int)num;
	if (res == 0.0)
		return ((int)num);
	else
		return ((int)(num + 1));
}
