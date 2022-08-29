/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlenp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:58:41 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/30 17:58:57 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlenp(unsigned long n)
{
	unsigned long	b;

	b = n;
	if (n > 15)
	{
		ft_puthexlenp(n / 16);
		ft_puthexlenp(n % 16);
	}
	else
	{
		if (n < 10)
		{
			n += '0';
			write(1, &n, 1);
		}
		else if (n > 9)
		{
			n += 87;
			write(1, &n, 1);
		}
	}
	return (ft_hexlenp(b));
}
