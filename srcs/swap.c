#include "push_swap.h"

static void				complexe(t_lst *lst)
{
	t_node				*tmp;
	t_node				*e1;
	t_node				*e2;

	e1 = lst->begin;
	e2 = lst->begin->next;
	tmp = e2->next;
	if (e2->next)
		e2->next->prev = e1;
	else
		lst->end = e1;
	e2->next = e1;
	e2->prev = NULL;
	e1->prev = e2;
	e1->next = tmp;
	lst->begin = e2;
}

void					swap(t_env *e, char c)
{
	if (c == 'a')
		complexe(e->a);
	else
		complexe(e->b);
	print(e, (c == 'a') ? "sa" : "sb");
}
