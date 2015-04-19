#include "push_swap.h"

t_env				*newenv(char *v)
{
	t_env			*new;

	if (!(new = (t_env *)malloc(sizeof(t_env))))
		ft_perror();
	new->a = newlst();
	new->b = newlst();
	new->opt = 0;
	if (!ft_strcmp(v, "-v"))
		new->opt |= VERBOSE;
	return (new);
}
