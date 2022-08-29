/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:55:25 by tchappui          #+#    #+#             */
/*   Updated: 2022/01/31 15:40:34 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_signal(int sig)
{
	static char	bits;
	static int	i;

	i++;
	if (sig == SIGUSR1)
		bits = bits << 1 | 1;
	else
		bits = bits << 1 | 0;
	if (i == 8)
	{
		write(1, &bits, 1);
		i = 0;
		bits = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("le PID:%u\n", pid);
	while (1)
	{
		signal(SIGUSR1, ft_signal);
		signal(SIGUSR2, ft_signal);
		pause();
	}
	return (0);
}
