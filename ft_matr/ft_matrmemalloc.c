/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrmemalloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 15:50:35 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/03 14:09:42 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_matrmemalloc(size_t size)
{
	char			**matr;
	int				i;

	if (size == 0)
		return (NULL);
	if ((matr = (char **)malloc(sizeof(char *) * size)) == NULL)
		return (NULL);
	i = 0;
	while (i < (int)size)
		matr[i++] = NULL;
	return (matr);
}
