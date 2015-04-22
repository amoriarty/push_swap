/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newnode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:35:59 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:36:06 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node										*newnode(int data)
{
	t_node									*new;

	if (!(new = (t_node *)malloc(sizeof(t_node))))
		ft_perror();
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
