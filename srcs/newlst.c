/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newlst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:35:42 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:35:50 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst								*newlst(void)
{
	t_lst							*new;

	if (!(new = (t_lst *)malloc(sizeof(t_lst))))
		ft_perror();
	new->begin = NULL;
	new->end = NULL;
	return (new);
}
