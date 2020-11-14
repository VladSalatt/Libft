/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:05:43 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:12:51 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matr.h"

char				**ft_matrnew(size_t matr_size, ...)
{
	char			**matr;
	va_list			arg;
	size_t			ss;
	int				i;

	va_start(arg, matr_size);
	if ((matr = (char **)malloc(sizeof(char *) * (matr_size + 1))) == NULL)
		return (NULL);
	i = 1;
	while (i < (int)matr_size)
	{
		ss = va_arg(arg, size_t);
		if ((matr[i++] = (char *)ft_memalloc(sizeof(char) * (ss + 1))) == NULL)
		{
			ft_matrdel(&matr);
			return (NULL);
		}
	}
	matr[i] = NULL;
	va_end(arg);
	return (matr);
}
