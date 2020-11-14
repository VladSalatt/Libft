# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/13 22:15:22 by ebulwer           #+#    #+#              #
#    Updated: 2020/11/13 22:15:24 by ebulwer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all:
	@echo \*\*\* Reassembly libraries from libft
	ar -x libft.a
	ar -x liballoc.a
	ar -x libctime.a
	ar -x libhashtab.a
	ar -x libmath.a
	ar -x liblist.a
	ar -x libbuff.a
	ar -x libmatr.a
	@ar rc $(NAME) *.o
	@ranlib $(NAME)
	@rm -f __.SYMDEF\ SORTED
	@mv $(NAME) ../../lib/$(NAME)
	@echo \*\*\* LIBFT COMPILED!

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
