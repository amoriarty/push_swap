#include "push_swap.h"

void				minimal(t_env *e)
{
	if (e->a->begin->data > e->a->begin->next->data)
		swap(e, 'a');
	else if (e->a->end->data < e->a->end->prev->data)
	{
		reverse_rotate(e, 'a');
		reverse_rotate(e, 'a');
		swap(e, 'a');
		rotate(e, 'a');
		rotate(e, 'a');
	}
}
