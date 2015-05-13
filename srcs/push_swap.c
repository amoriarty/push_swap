/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:36:36 by alegent           #+#    #+#             */
/*   Updated: 2015/05/13 15:07:12 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int					push_swap(t_env *e)
{
	int				len;

	if (!e->a || (len = lstlen(e->a)) < 2)
		ft_perror();
	if (!verifsort(e->a))
	{
		if (e->opt & VERBOSE)
			print(e, NULL);
		if (len == 2)
			swap(e, 'a');
		else if (len == 3)
			lsort(e);
		else
		{
			minimal(e);
			if (!verifsort(e->a))
				sort(e, len);
		}
		if (~(e->opt) & VERBOSE)
			ft_putchar(EOL);
	}
	else if (e->opt & VERBOSE)
		print(e, NULL);
	return (EXIT_SUCCESS);
}
