/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:34:45 by alegent           #+#    #+#             */
/*   Updated: 2015/04/29 10:00:05 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void				ft_norme(t_env *e)
{
	swap(e, 'a');
	reverse_rotate(e, 'a');
}

void					lsort(t_env *e)
{
	t_node				*tmp;

	tmp = e->a->begin;
	if (tmp->data > tmp->next->data && tmp->next->data > tmp->next->next->data)
		ft_norme(e);
	else if (tmp->data > tmp->next->data
			&& tmp->next->data < tmp->next->next->data
			&& tmp->data < tmp->next->next->data)
		swap(e, 'a');
	else if (tmp->data < tmp->next->data
			&& tmp->next->data > tmp->next->next->data
			&& tmp->data < tmp->next->next->data)
	{
		swap(e, 'a');
		rotate(e, 'a');
	}
	else if (tmp->data < tmp->next->data
			&& tmp->next->data > tmp->next->next->data
			&& tmp->data > tmp->next->next->data)
		reverse_rotate(e, 'a');
	else if (tmp->data > tmp->next->data
			&& tmp->next->data < tmp->next->next->data
			&& tmp->data > tmp->next->next->data)
		rotate(e, 'a');
}
