/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecozturk <ecozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:06:32 by ecozturk          #+#    #+#             */
/*   Updated: 2023/03/11 12:59:56 by ecozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./utils/ft_printf.h"
# include <signal.h>
# include <unistd.h>

void	read_bits(int sig);
void	kill_bill(int pid, char c);

#endif