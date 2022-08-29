/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:16:58 by tchappui          #+#    #+#             */
/*   Updated: 2021/12/01 15:38:57 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrlen(int n)
{
	int	b;

	b = n;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbrlen(n / 10);
			ft_putnbrlen(n % 10);
		}
		else
		{
			n += '0';
			write(1, &n, 1);
		}
	}
	return (ft_nbrlen(b));
}
