/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numblen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:41:41 by ebulwer           #+#    #+#             */
/*   Updated: 2019/07/25 17:38:41 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numblen(long long n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}