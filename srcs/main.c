/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:35:18 by alegent           #+#    #+#             */
/*   Updated: 2015/05/13 15:08:27 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int								main(int ac, char **av)
{
	int							tmp;
	t_env						*e;

	tmp = 0;
	if (ac == 1)
		ft_perror();
	e = newenv();
	if (!ft_strcmp(av[1], "-s") || !ft_strcmp(av[2], "-s"))
		e->opt |= SHOTS;
	if (!ft_strcmp(av[1], "-v") || !ft_strcmp(av[2], "-v"))
		e->opt |= VERBOSE;
	tmp += (e->opt & VERBOSE) ? 1 : 0;
	tmp += (e->opt & SHOTS) ? 1 : 0;
	while (--ac > tmp)
	{
		verifdata(av[ac]);
		if (verifdouble(e->a, ft_atoi(av[ac])))
			e->a = insertnode(e->a, ft_atoi(av[ac]));
	}
	push_swap(e);
	if (e->opt & SHOTS)
		ft_putendl(ft_strjoin("Shots = ", ft_itoa(e->shots)));
	return (EXIT_SUCCESS);
}
