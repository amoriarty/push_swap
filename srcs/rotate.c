#include "push_swap.h"

static void			complexe(t_lst *lst)
{
	t_node			*tmp;

	tmp = lst->begin;
	if (lst->begin->next)
		lst->begin = lst->begin->next;
	else
		lst->end = lst->begin;
	lst->begin->prev = NULL;
	lst->end->next = tmp;
	tmp->next = NULL;
	tmp->prev = lst->end;
	lst->end = tmp;
}

void				rotate(t_env *e, char c)
{
	if (c == 'a')
		complexe(e->a);
	else
		complexe(e->b);
	print(e, (c == 'a') ? "ra" : "rb");
}
