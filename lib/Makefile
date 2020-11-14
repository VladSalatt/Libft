# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 01:54:46 by ebulwer           #+#    #+#              #
#    Updated: 2019/12/06 21:31:33 by ebulwer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all:
	@ar rc $(NAME) *.o
	@ranlib $(NAME)
	@mv $(NAME) ../$(NAME)
	@echo \*\*\* LIBFT COMPILED!

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	