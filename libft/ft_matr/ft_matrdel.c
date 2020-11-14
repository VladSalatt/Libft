/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:05:01 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:05:07 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matr.h"

void				*ft_matrdel(char ***ret)
{
	char	**tmp;
	int		i;

	if (*ret == NULL)
		return (NULL);
	tmp = *ret;
	i = 0;
	while (tmp[i] != NULL)
	{
		ft_strdel(&tmp[i]);
		i++;
	}
	free(tmp);
	tmp = NULL;
	*ret = tmp;
	return (NULL);
}
