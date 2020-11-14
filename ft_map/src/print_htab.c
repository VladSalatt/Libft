/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_htab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:00:20 by ebulwer           #+#    #+#             */
/*   Updated: 2019/12/03 21:31:09 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_map.h"

void				print_htab(t_htab *htab, void (*printvalue)(void *))
{
	ft_printf("key : %s\n  value:\n", htab->key);
	printvalue(htab->value);
}
