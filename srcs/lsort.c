/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:34:45 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:34:48 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void					lsort(t_env *e)
{
	t_node				*tmp;

	tmp = e->a->begin;
	if (tmp->data > tmp->next->data && tmp->next->data > tmp->next->next->data)
		reverse_rotate(e, 'a');
	else if (tmp->data > tmp->next->data
			&& tmp->next->data < tmp->next->next->data
			&& tmp->data > tmp->next->next->data)
		rotate(e, 'a');
	else if (tmp->data > tmp->next->data
			&& tmp->next->data < tmp->next->next->data
			&& tmp->data < tmp->next->next->data)
		swap(e, 'a');
	else if (tmp->data < tmp->next->data
			&& tmp->next->data > tmp->next->next->data
			&& tmp->data > tmp->next->next->data)
		reverse_rotate(e, 'a');
	else if (tmp->data < tmp->next->data
			&& tmp->next->data > tmp->next->next->data
			&& tmp->data < tmp->next->next->data)
	{
		reverse_rotate(e, 'a');
		swap(e, 'a');
	}
}
