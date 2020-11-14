/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:12:31 by ebulwer           #+#    #+#             */
/*   Updated: 2020/01/17 01:34:30 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

# define EXPANSION_COEFFICIENT 4

typedef struct			s_htab
{
	char				*key;
	void				*value;
}						t_htab;

int						hashfunction(const char *str, int size);
t_htab					*init_htab(const char *key, void *value);
void					print_htab(t_htab *htab, void (*printvalue)(void *));

#endif
