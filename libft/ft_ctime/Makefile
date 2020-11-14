# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/13 21:58:01 by ebulwer           #+#    #+#              #
#    Updated: 2020/11/13 21:58:03 by ebulwer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../includes/libft.mk

SOURCES = ft_uctime.c ft_ctime.c getdata.c getmonth.c get_temporarydata.c \
			struct_to_str.c
OBJECTS = ft_uctime.o ft_ctime.o getdata.o getmonth.o get_temporarydata.o \
			struct_to_str.o

NAME = libctime.a

all: print $(SOURCES) $(NAME)
	
print:
	@echo \*\*\* Compiling ft_ctime

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
