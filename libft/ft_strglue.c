/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strglue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:39:13 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:39:16 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						ft_strglue(char *puthere, ...)
{
	va_list			arg;
	int				counter;
	int				i;
	char			*str;

	if (puthere == NULL)
		return ;
	va_start(arg, (char *)puthere);
	counter = ft_strlen(puthere);
	while (1)
	{
		if ((str = va_arg(arg, char*)) == NULL)
			break ;
		i = 0;
		while (str[i] != '\0')
			puthere[counter++] = str[i++];
	}
	va_end(arg);
}
