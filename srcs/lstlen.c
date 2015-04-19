#include "push_swap.h"

int					lstlen(t_lst *lst)
{
	int				i;
	t_node				*tmp;

	i = 0;
	tmp = lst->begin;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
