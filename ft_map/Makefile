
include ../includes/libft.mk

SOURCES = ft_mapinit.c ft_mapinsert.c ft_putmap.c ft_mapvalue.c ft_mapdel.c \
			ft_mapdelind.c ft_mapdelkey.c ft_ismapitem.c
OBJECTS = $(addprefix $(DIR_O)/,$(patsubst %.c,%.o,$(SOURCES)))

all: print compile_src $(OBJECTS)
	
print:
	@echo \*\*\* Compiling ft_map

compile_src:
	@make -C src/ all

$(DIR_O)/%.o: %.c
	$(COMPILING) $< -o $@

clean:
	@rm -f ../lib/$(OBJECTS)

fclean: clean