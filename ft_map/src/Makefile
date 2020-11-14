
include ../../includes/libft.mk

LIBFT_H = -I ../../includes/
CTIME_H = -I ../
COMPILING = $(CC) $(CFLAGS) $(LIBFT_H) $(CTIME_H)

DIR_O = ../../lib
SOURCES = hashfunc.c print_htab.c htab.c map_reindexing.c
OBJECTS = $(addprefix $(DIR_O)/,$(patsubst %.c,%.o,$(SOURCES)))

all: $(OBJECTS)
	@true

$(DIR_O)/%.o: %.c
	@$(COMPILING) $< -o $@

clean:
	@rm -f ../../lib/$(OBJECTS)
