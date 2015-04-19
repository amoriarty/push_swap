#include "push_swap.h"

t_node					*newnode(int data)
{
	t_node				*new;

	if (!(new = (t_node *)malloc(sizeof(t_node))))
		ft_perror();
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
