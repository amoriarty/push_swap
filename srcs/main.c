/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:35:18 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:35:25 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int								main(int ac, char **av)
{
	t_env						*e;

	if (ac == 1)
		ft_perror();
	e = newenv(av[1]);
	while (--ac > (e->opt & VERBOSE) ? 1 : 0)
	{
		verifdata(av[ac]);
		if (verifdouble(e->a, ft_atoi(av[ac])))
			e->a = insertnode(e->a, ft_atoi(av[ac]));
	}
	return (push_swap(e));
}
