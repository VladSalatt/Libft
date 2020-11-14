# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/13 22:15:41 by ebulwer           #+#    #+#              #
#    Updated: 2020/11/13 22:15:43 by ebulwer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

all:
	@echo \*\*\* Reassembly libft.a and printf.a to $(NAME)
	ar -x libft.a
	ar -x printf.a
	@ar rc $(NAME) *.o
	@ranlib $(NAME)
	@rm -f __.SYMDEF*
	@mv $(NAME) ../$(NAME)
	@echo \*\*\* LIBFTPRINTF COMPILED!

clean:
	@rm -f *.o

fclean: clean
