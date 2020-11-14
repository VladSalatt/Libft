/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncut.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:26:47 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/14 14:26:51 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*first(char *str, int n)
{
	char	*segment;
	int		i;

	i = 0;
	segment = (char *)ft_memalloc(n + 1);
	while (i < n)
	{
		segment[i] = str[i];
		i++;
	}
	segment[i] = '\0';
	return (segment);
}

static char		*second(char *str, int n)
{
	char	*segment;
	int		i;
	int		j;

	i = n;
	j = 0;
	segment = (char *)ft_memalloc(ft_strlen(str + n));
	while (str[i] != '\0')
	{
		segment[j] = str[i];
		i++;
		j++;
	}
	segment[j] = '\0';
	return (segment);
}

char			*ft_strncut(char *str, int n, char *choice)
{
	if (str == NULL)
		return (NULL);
	if ((int)ft_strlen(str) < n || n < 0)
		return (NULL);
	if ((int)ft_strlen(str) == n)
		return (str);
	if (ft_strcmp(choice, "first") == 0)
		return (first(str, n));
	else if (ft_strcmp(choice, "second") == 0)
		return (second(str, n));
	return (NULL);
}
