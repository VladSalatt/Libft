/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:53:58 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 21:54:03 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALLOC_H
# define FT_ALLOC_H

# include "../includes/libft.h"

void							*ft_realloc(void *ptr, size_t newsize);
void							*ft_memalloc(size_t size);
void							ft_memdel(void **ap);
void							ft_strdel(char **as);

#endif
