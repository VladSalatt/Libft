
#include "ft_list.h"

void					default_lstdel(t_list *list)
{
	list->next = NULL;
	ft_strdel(&(list->content));
	free(list);
	list = NULL;
}

void					ft_lstdel(t_list **head)
{
	t_list				*tmp;

	if (*head == NULL)
		return ;
	tmp = *head;
	while (tmp->next != NULL)
	{
		if ((*head = ft_lstdelone(*head, tmp)) == NULL)
			return ;
		tmp = (*head);
	}
	default_lstdel(*head);
}
