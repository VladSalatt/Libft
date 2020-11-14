# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/13 21:59:41 by ebulwer           #+#    #+#              #
#    Updated: 2020/11/13 21:59:44 by ebulwer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../includes/libft.mk

SOURCES = ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstnew.c ft_lstpushback.c \
			ft_listsize.c
OBJECTS = ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstnew.o ft_lstpushback.o \
			ft_listsize.o

NAME = liblist.a

all: print $(SOURCES) $(NAME)
	
print:
	@echo \*\*\* Compiling ft_list

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
