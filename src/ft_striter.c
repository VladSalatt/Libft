/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:31:23 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/16 11:16:15 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striter(char *s, void (*f)(char *))
{
	size_t			i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
		f(&s[i++]);
}
