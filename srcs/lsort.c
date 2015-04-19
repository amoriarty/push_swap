#include "push_swap.h"

void					lsort(t_env *e)
{
	t_node				*tmp;

	tmp = e->a->begin;
	if (tmp->data > tmp->next->data && tmp->next->data > tmp->next->next->data)
		reverse_rotate(e, 'a');
	else if (tmp->data > tmp->next->data
			&& tmp->next->data < tmp->next->next->data
			&& tmp->data > tmp->next->next->data)
		rotate(e, 'a');
	else if (tmp->data > tmp->next->data
			&& tmp->next->data < tmp->next->next->data
			&& tmp->data < tmp->next->next->data)
		swap(e, 'a');
	else if (tmp->data < tmp->next->data
			&& tmp->next->data > tmp->next->next->data
			&& tmp->data > tmp->next->next->data)
		reverse_rotate(e, 'a');
	else if (tmp->data < tmp->next->data
			&& tmp->next->data > tmp->next->next->data
			&& tmp->data < tmp->next->next->data)
	{
		reverse_rotate(e, 'a');
		swap(e, 'a');
	}
}
