/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashfunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:47:41 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:36:59 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"
#include "libft.h"

#define MIN_LONG_LONG -9223372036854775807

static long long		aabs(long long num)
{
	if (num == MIN_LONG_LONG)
		return (-(num + 1));
	else if (num < 0)
		return (-num);
	else
		return (num);
}

int						hashfunction(const char *str, int size)
{
	int			i;
	long long	hash;
	int			p;
	long long	p_pow;

	p_pow = 1;
	i = 0;
	hash = 0;
	p = 16;
	while (str[i] != '\0')
	{
		hash += (str[i] - 'a' + 1) * p_pow;
		p_pow *= p;
		i++;
	}
	hash = aabs(hash);
	if (hash < 0)
		hash = aabs(hash) % size;
	else
		hash = hash % size;
	return (hash);
}
