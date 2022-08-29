/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbrlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:18:20 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/30 14:18:39 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_uputnbrlen(unsigned int n)
{
	int	b;

	b = n;
	if (n > 9)
	{
		ft_uputnbrlen(n / 10);
		ft_uputnbrlen(n % 10);
	}
	else
	{
		n += '0';
		write(1, &n, 1);
	}
	return (ft_nbrlenu(b));
}
