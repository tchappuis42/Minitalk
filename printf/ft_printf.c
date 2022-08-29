/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:05:26 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/24 16:05:33 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_calcul(char *s, size_t i, va_list args)
{
	int	ret;

	ret = 0;
	if (s[i] == 'c')
		ret += ft_putcharlen(va_arg(args, int));
	else if (s[i] == 's')
		ret += ft_putstrlen(va_arg(args, char *));
	else if (s[i] == '%')
		ret += ft_putcharlen('%');
	else if (s[i] == 'd')
		ret += ft_putnbrlen(va_arg(args, int));
	else if (s[i] == 'i')
		ret += ft_putnbrlen(va_arg(args, int));
	else if (s[i] == 'u')
		ret += ft_uputnbrlen(va_arg(args, unsigned int));
	else if (s[i] == 'p')
	{
		write(1, "0x", 2);
		ret += ft_puthexlenp(va_arg(args, unsigned long));
	}
	else if (s[i] == 'x')
		ret += ft_puthexlen(va_arg(args, unsigned int));
	else if (s[i] == 'X')
		ret += ft_puthexlenu(va_arg(args, unsigned int));
	return (ret);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;
	char	*str;
	int		ret;

	str = ((char *)s);
	i = 0;
	ret = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			ret += ft_calcul(str, ++i, args);
		else
			ret += ft_putcharlen(s[i]);
		i++;
	}
	va_end(args);
	return (ret);
}
