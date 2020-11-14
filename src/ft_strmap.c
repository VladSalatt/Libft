/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:56:29 by ebulwer           #+#    #+#             */
/*   Updated: 2019/09/16 11:24:46 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*newstr;

	if (!s || !f)
		return (NULL);
	if ((newstr = ft_strnew(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	ft_striter(newstr, (void *)f);
	return (newstr);
}
