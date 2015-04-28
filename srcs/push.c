/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:36:27 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:36:30 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void				pushto(t_lst *e1, t_lst *e2)
{
	e2 = insertnode(e2, e1->begin->data);
	if (e1->begin->next)
		e1->begin = e1->begin->next;
	else
	{
		e1->begin = NULL;
		e1->end = NULL;
		return ;
	}
	e1->begin->prev = NULL;
}

void					push(t_env *e, char c)
{
	if (c == 'b')
		pushto(e->a, e->b);
	else
		pushto(e->b, e->a);
	print(e, (c == 'b') ? "pb" : "pa");
}
