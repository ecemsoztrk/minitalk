/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecozturk <ecozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:19:17 by ecozturk          #+#    #+#             */
/*   Updated: 2023/03/10 12:38:32 by ecozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	read_bits(int signal)
{
	static int		n;
	static int		result;

	if (signal == SIGUSR1)
		result += (1 << n);
	n++;
	if (n == 8)
	{
		write(1, &result, 1);
		n = 0;
		result = 0;
	}
}

int	main(void)
{
	ft_printf("pid %d\n", getpid());
	signal(SIGUSR1, read_bits);
	signal (SIGUSR2, read_bits);
	while (1)
		continue ;
}
