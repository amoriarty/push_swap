#include "push_swap.h"

static void			printnode(t_node *node)
{
	t_node			*tmp;

	tmp = node;
	while (tmp)
	{
		ft_putnbr(tmp->data);
		ft_putchar((tmp->prev) ? ' ' : EOL);
		tmp = tmp->prev;
	}
}

static void			printpile(t_env *e)
{
	if (e->a->end)
	{
		ft_putstr("a = ");
		printnode(e->a->end);
	}
	if (e->b->end)
	{
		ft_putstr("b = ");
		printnode(e->b->end);
	}
}

void				print(t_env *e, char *s)
{
	static int		already;

	if (e->opt & VERBOSE)
	{
		if (s)
			ft_putendl(s);
		printpile(e);
	}
	else
	{
		if (already++)
			ft_putchar(' ');
		ft_putstr(s);
	}
}
