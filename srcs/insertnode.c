#include "push_swap.h"

t_lst				*insertnode(t_lst *lst, int data)
{
	t_node			*new;

	new = newnode(data);
	if (!lst->begin)
	{
		lst->begin = new;
		lst->end = new;
		return (lst);
	}
	else
	{
		lst->begin->prev = new;
		new->next = lst->begin;
		lst->begin = new;
	}
	return (lst);
}
