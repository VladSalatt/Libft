
#include "ft_list.h"

t_list					*ft_lstdelone(t_list *head, t_list *dellist)
{
	t_list				*tmp;
	t_list				*lst;

	if (dellist == NULL)
		return (NULL);
	tmp = head;
	lst = dellist;
	if (tmp == lst)
	{
		head = head->next;
		default_lstdel(lst);
		lst = head;
		return (lst);
	}
	if (tmp->next != NULL)
	{
		while (tmp->next != lst)
			tmp = tmp->next;
		tmp->next = lst->next;
	}
	default_lstdel(lst);
	return (head);
}
