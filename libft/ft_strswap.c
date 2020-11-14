/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:46:03 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:46:09 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strswap(char **matrix, int first, int second)
{
	char	*tmp;

	tmp = ft_strdup(matrix[first]);
	ft_strdel(&matrix[first]);
	matrix[first] = ft_strdup(matrix[second]);
	ft_strdel(&matrix[second]);
	matrix[second] = ft_strdup(tmp);
	ft_strdel(&tmp);
	return (matrix);
}
