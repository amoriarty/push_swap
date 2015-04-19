#include "push_swap.h"

void			verifdata(char *data)
{
	int		i;

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
