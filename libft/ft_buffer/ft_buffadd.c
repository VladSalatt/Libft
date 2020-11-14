/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:57:10 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:57:12 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buffer.h"

void					ft_buffadd(t_buff *buff, const char *str)
{
	int					size_of_new_str;
	int					remaining_size;

	if (str == NULL)
		return ;
	remaining_size = buff->totalsize - buff->i;
	size_of_new_str = ft_strlen(str);
	if (remaining_size <= size_of_new_str)
	{
		buff->totalsize += size_of_new_str + buff->additional_size;
		if ((buff->str = ft_realloc(buff->str, buff->totalsize)) == NULL)
			exit(1);
	}
	ft_strlglue(buff->i, buff->str, str, NULL);
	buff->i += size_of_new_str;
}

void					ft_buffladd(t_buff *buff, const char *str, int len)
{
	int					size_of_new_str;
	int					remaining_size;

	if (str == NULL)
		return ;
	remaining_size = buff->totalsize - buff->i;
	size_of_new_str = len;
	if (remaining_size <= size_of_new_str)
	{
		buff->totalsize += size_of_new_str + buff->additional_size;
		if ((buff->str = ft_realloc(buff->str, buff->totalsize)) == NULL)
			exit(1);
	}
	ft_strlglue(buff->i, buff->str, str, NULL);
	buff->i += size_of_new_str;
}