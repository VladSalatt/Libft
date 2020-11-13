
#ifndef FT_ALLOC_H
# define FT_ALLOC_H

# include "../includes/libft.h"

void							*ft_realloc(void *ptr, size_t newsize);
void							*ft_memalloc(size_t size);
void							ft_memdel(void **ap);
void							ft_strdel(char **as);

#endif
