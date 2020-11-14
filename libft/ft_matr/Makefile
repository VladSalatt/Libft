# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/13 22:04:36 by ebulwer           #+#    #+#              #
#    Updated: 2020/11/13 22:04:38 by ebulwer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../includes/libft.mk

SOURCES = ft_matrdel.c ft_matrdup.c ft_matrmemalloc.c ft_matrnew.c
OBJECTS = ft_matrdel.o ft_matrdup.o ft_matrmemalloc.o ft_matrnew.o

NAME = libmatr.a

all: print $(SOURCES) $(NAME)
	
print:
	@echo \*\*\* Compiling ft_matr

.c.o:
	$(COMPILING) $< -o $@

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@mv $(NAME) ../lib/$(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f ../lib/$(NAME)
	
