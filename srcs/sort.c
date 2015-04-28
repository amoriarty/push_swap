/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:37:13 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:40:48 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void							ontop(t_env *e, int value, int len)
{
	int								i;
	t_node							*tmp;

	i = 0;
	tmp = e->a->begin;
	while (tmp)
	{
		if (tmp->data == value)
		{
			if (i < len / 2)
			{
				while (e->a->begin->data != value)
					rotate(e, 'a');
				return ;
			}
			else
			{
				while (e->a->begin->data != value)
					reverse_rotate(e, 'a');
				return ;
			}
		}
		i++;
		tmp = tmp->next;
	}
}

void								sort(t_env *e, int len)
{
	int								i;
	int								x;
	int								*tab;

	i = -1;
	x = len;
	tab = gettab(e->a->begin, len);
	while (x-- > 3)
	{
		ontop(e, tab[++i], len);
		push(e, 'b');
	}
	lsort(e);
	while (len-- > 3)
		push(e, 'a');
}
