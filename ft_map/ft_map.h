/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:53:04 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/12 12:53:05 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

# define EXPANSION_COEFFICIENT 4

typedef struct		s_htab
{
	char 			*key;
	void 			*value;
}					t_htab;

#endif