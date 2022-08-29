/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:49:14 by tchappui          #+#    #+#             */
/*   Updated: 2022/02/10 13:18:37 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_convert(char *s, int pid)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 7;
		while (j >= 0)
		{
			if ((s[i] >> j) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			j--;
			usleep(50);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;

	if (argc != 3)
	{
		return (-1);
	}
	pid = ft_atoi(argv[1]);
	ft_convert(argv[2], pid);
}
