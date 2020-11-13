
#include "ft_buffer.h"

void					ft_buffdel(t_buff **buff)
{
	ft_strdel(&((*buff)->str));
	(*buff)->i = 0;
	(*buff)->totalsize = 0;
	(*buff)->additional_size = 0;
	free(*buff);
	buff = NULL;
}
