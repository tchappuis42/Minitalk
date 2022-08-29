/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlenu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:44:20 by tchappui          #+#    #+#             */
/*   Updated: 2021/12/01 11:44:23 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlenu(unsigned int n)
{
	int	b;

	b = n;
	if (n > 15)
	{
		ft_puthexlenu(n / 16);
		ft_puthexlenu(n % 16);
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
			n += 55;
			write(1, &n, 1);
		}
	}
	return (ft_hexlen(b));
}
