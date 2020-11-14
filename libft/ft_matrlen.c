/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:33:35 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:33:37 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t					ft_matrlen(const char **matr)
{
	size_t				len;

	len = 0;
	while (*matr != NULL)
	{
		len++;
		matr++;
	}
	return (len);
}
