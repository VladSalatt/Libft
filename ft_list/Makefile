
include ../includes/libft.mk

SOURCES = ft_lstdel.c ft_lstdelone.c ft_lstnew.c ft_lstadd.c \
			ft_lstpushback.c ft_putlst.c ft_lstdelthis.c ft_lstaddhere.c \
			ft_lstsize.c ft_lstiter.c ft_lstmap.c ft_lstdeltail.c \
			ft_lstdelhead.c
OBJECTS = $(addprefix $(DIR_O)/,$(patsubst %.c,%.o,$(SOURCES)))

all: print $(OBJECTS)
	
print:
	@echo \*\*\* Compiling ft_list

$(DIR_O)/%.o: %.c
	$(COMPILING) $< -o $@

clean:
	@rm -f ../lib/$(OBJECTS)

fclean: clean