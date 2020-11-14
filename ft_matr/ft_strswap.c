/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:57:50 by ebulwer           #+#    #+#             */
/*   Updated: 2019/11/19 16:12:36 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_strswap(char **matr, int first, int second)
{
	char	*tmp;

	tmp = ft_strdup(matr[first]);
	ft_strdel(&matr[first]);
	matr[first] = ft_strdup(matr[second]);
	ft_strdel(&matr[second]);
	matr[second] = tmp;
}
