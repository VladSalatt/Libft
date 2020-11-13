
#include "ft_list.h"

void				ft_lstadd(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
