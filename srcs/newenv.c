/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newenv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:39:15 by alegent           #+#    #+#             */
/*   Updated: 2015/05/13 15:05:24 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_env								*newenv(void)
{
	t_env							*new;

	if (!(new = (t_env *)malloc(sizeof(t_env))))
		ft_perror();
	new->a = newlst();
	new->b = newlst();
	new->opt = 0;
	new->shots = 0;
	return (new);
}
