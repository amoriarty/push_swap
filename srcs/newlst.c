#include "push_swap.h"

t_lst			*newlst(void)
{
	t_lst		*new;

	if (!(new = (t_lst *)malloc(sizeof(t_lst))))
		ft_perror();
	new->begin = NULL;
	new->end = NULL;
	return (new);
}
