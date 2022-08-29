/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:12:59 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/30 14:13:18 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrlen(char *s)
{
	int	i;
	int	len;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
