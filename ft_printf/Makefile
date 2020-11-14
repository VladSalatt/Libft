
include ../includes/libft.mk

SOURCES = ft_printf.c
OBJECTS = $(addprefix $(DIR_O)/,$(patsubst %.c,%.o,$(SOURCES)))

all: print compile_src $(OBJECTS)
	
print:
	@echo \*\*\* Compiling ft_printf

compile_src:
	@make -C src/ all

$(DIR_O)/%.o: %.c
	$(COMPILING) $< -o $@

clean:
	@rm -f ../lib/$(OBJECTS)
	@make -C src/ clean

fclean: clean