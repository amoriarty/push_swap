/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:34:28 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:34:37 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst									*insertnode(t_lst *lst, int data)
{
	t_node								*new;

	new = newnode(data);
	if (!lst->begin)
	{
		lst->begin = new;
		lst->end = new;
		return (lst);
	}
	else
	{
		lst->begin->prev = new;
		new->next = lst->begin;
		lst->begin = new;
	}
	return (lst);
}
