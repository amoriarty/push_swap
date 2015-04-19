#include "push_swap.h"

int					verifsort(t_lst *lst)
{
	t_node				*tmp;

	tmp = lst->begin;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}
