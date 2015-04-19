#include "push_swap.h"

static int			*sorttab(int *tab, int len)
{
	int			i;
	int			o;
	int			s;

	o = FALSE;
	while (o == FALSE)
	{
		i = -1;
		o = TRUE;
		while (++i < len - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				o = FALSE;
				s = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = s;
			}
		}
	}
	return (tab);
}

int				*gettab(t_node *node, int len)
{
	int			i;
	int			*tab;
	t_node			*tmp;

	i = -1;
	tmp = node;
	if (!(tab = (int *)malloc(sizeof(int) * len)))
		ft_perror();
	while (tmp)
	{
		tab[++i] = tmp->data;
		tmp = tmp->next;
	}
	return (sorttab(tab, len));
}
