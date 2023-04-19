/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecozturk <ecozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:19:19 by ecozturk          #+#    #+#             */
/*   Updated: 2023/03/11 13:00:05 by ecozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	kill_bill(int pid, char c)
{
	int	i;

	i = 0;
	while (i <= 7)
	{
		if ((c >> i) & 1)
			kill (pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
		i++;
		usleep (50);
	}
}

int	main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 3)
	{
		while (av[2][i])
		{
			kill_bill (ft_atoi(av[1]), av[2][i]);
			i++;
		}
	}
	else
		ft_printf ("Whoops slow down baby too many or too few arguments !!!");
	return (0);
}
