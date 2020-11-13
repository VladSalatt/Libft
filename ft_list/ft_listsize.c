
#include "ft_list.h"

int					ft_listsize(t_list *head)
{
	t_list			*tmp;
	int				len;

	tmp = head;
	len = 0;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
