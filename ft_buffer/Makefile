include ../includes/libft.mk

SOURCES = ft_buffinit.c ft_buffdel.c ft_buffadd.c ft_buffaddsymb.c
OBJECTS = $(addprefix $(DIR_O)/,$(patsubst %.c,%.o,$(SOURCES)))

all: print $(OBJECTS)
	
print:
	@echo \*\*\* Compiling ft_buffer

$(DIR_O)/%.o: %.c
	$(COMPILING) $< -o $@

clean:
	@rm -f ../lib/$(OBJECTS)

fclean: clean
	