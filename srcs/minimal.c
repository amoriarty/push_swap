/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 09:58:09 by alegent           #+#    #+#             */
/*   Updated: 2015/05/13 14:38:36 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				minimal(t_env *e)
{
	if (e->a->begin->data > e->a->end->data)
		reverse_rotate(e, 'a');
	else if (e->a->begin->data > e->a->begin->next->data)
		swap(e, 'a');
	else if (e->a->end->data < e->a->end->prev->data)
	{
		reverse_rotate(e, 'a');
		reverse_rotate(e, 'a');
		swap(e, 'a');
		rotate(e, 'a');
		rotate(e, 'a');
	}
}
