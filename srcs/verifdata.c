/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifdata.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 14:38:13 by alegent           #+#    #+#             */
/*   Updated: 2015/04/22 14:38:20 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void							verifdata(char *data)
{
	int							i;

	i = 0;
	if (data[i] == '-' || data[i] == '+')
		i++;
	if (ft_strcmp(ft_itoa(ft_atoi(data)), data))
		ft_perror();
	while (data[i])
	{
		if (!ft_isdigit(data[i++]))
			ft_perror();
	}
}
