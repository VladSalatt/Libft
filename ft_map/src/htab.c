/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:58:44 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/12 12:58:45 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../ft_map.h"

t_htab				*init_htab(const char *key, void *value)
{
	t_htab			*htab;

	if ((htab = (t_htab *)malloc(sizeof(t_htab))) == NULL)
		return (NULL);
	if ((htab->key = ft_strdup(key)) == NULL)
	{
		free(htab);
		return (NULL);
	}
	htab->value = value;
	return (htab);
}
