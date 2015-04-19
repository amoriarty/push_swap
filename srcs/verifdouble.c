#include "push_swap.h"

int				verifdouble(t_lst *lst, int data)
{
	t_node			*tmp;

	tmp = lst->begin;
	while (tmp)
	{
		if (tmp->data == data)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}
