
#include "ft_list.h"

t_list				*ft_lstnew(const char *content)
{
	t_list				*list;

	if ((list = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	list->content = ft_strdup(content);
	list->next = NULL;
	return (list);
}
