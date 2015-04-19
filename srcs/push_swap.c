#include "push_swap.h"

int					push_swap(t_env *e)
{
	int				len;

	if (!e->a || (len = lstlen(e->a)) < 2)
		ft_perror();
	if (!verifsort(e->a))
	{
		if (len == 2)
			swap(e, 'a');
		else if (len == 3)
			lsort(e);
		else
			sort(e, len);
		if (~(e->opt) & VERBOSE)
			ft_putchar(EOL);
	}
	else if (e->opt & VERBOSE)
		print(e, NULL);
	return (EXIT_SUCCESS);
}
