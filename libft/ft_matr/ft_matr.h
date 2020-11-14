/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matr.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:06:48 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/13 22:07:57 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATR_H
# define FT_MATR_H

# include "../includes/libft.h"

char					**ft_matrnew(size_t matr_size, ...);
char					**ft_matrmemalloc(size_t size);
char					**ft_matrdup(const char *first_str, ...);
void					*ft_matrdel(char ***ret);

#endif
