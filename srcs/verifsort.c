/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:38:43 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:38:45 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int									verifsort(t_lst *lst)
{
	t_node							*tmp;

	tmp = lst->begin;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}
