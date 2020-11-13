
#include "ft_alloc.h"

void	*ft_memalloc(size_t size)
{
	void *arr;

	arr = malloc(size);
	if (arr == NULL)
		return (NULL);
	else
		return (ft_memset(arr, '\0', size));
}
