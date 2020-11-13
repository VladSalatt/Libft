

#include "ft_buffer.h"

void					ft_buffaddsymb(t_buff *buff, char c)
{
	int					size_of_new_str;
	int					remaining_size;

	remaining_size = buff->totalsize - buff->i;
	size_of_new_str = 1;
	if (remaining_size <= size_of_new_str)
	{
		buff->totalsize += size_of_new_str + buff->additional_size;
		if ((buff->str = ft_realloc(buff->str, buff->totalsize)) == NULL)
			exit(1);
	}
	buff->str[buff->i] = c;
	buff->i += size_of_new_str;
}
