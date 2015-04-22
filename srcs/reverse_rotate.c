/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:36:43 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:36:52 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void								reverse_rotate(t_env *e, char c)
{
	int								tmp;
	t_lst							*lst;

	lst = (c == 'a') ? e->a : e->b;
	tmp = lst->end->data;
	lst->end = lst->end->prev;
	lst->end->next = NULL;
	lst = insertnode(lst, tmp);
	print(e, (c == 'a') ? "rra" : "rrb");
}
