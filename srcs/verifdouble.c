/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:38:26 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:38:32 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int								verifdouble(t_lst *lst, int data)
{
	t_node						*tmp;

	tmp = lst->begin;
	while (tmp)
	{
		if (tmp->data == data)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}
