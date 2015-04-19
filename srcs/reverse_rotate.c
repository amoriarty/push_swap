#include "push_swap.h"

void				reverse_rotate(t_env *e, char c)
{
	int			tmp;
	t_lst			*lst;

	lst = (c == 'a') ? e->a : e->b;
	tmp = lst->end->data;
	lst->end = lst->end->prev;
	lst->end->next = NULL;
	lst = insertnode(lst, tmp);
	print(e, (c == 'a') ? "rra" : "rrb");
}
