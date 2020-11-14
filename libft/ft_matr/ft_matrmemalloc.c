/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrmemalloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:05:27 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:05:29 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matr.h"

char				**ft_matrmemalloc(size_t size)
{
	char			**matr;
	int				i;

	if ((matr = (char **)malloc(sizeof(char *) * (size + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i <= (int)size)
		matr[i++] = NULL;
	return (matr);
}
