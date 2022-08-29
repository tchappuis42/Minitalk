/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:15:33 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:40:30 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_convnbr(int n, int lenn, char *s)
{		
	while (--lenn >= 0)
	{
		s[lenn] = n % 10 + '0';
		n = n / 10;
	}
	return (n);
}

static int	ft_nbrlen(int nbr)
{
	int	c;

	c = 0;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr >= 1 )
	{
		nbr = (nbr / 10);
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		lenn;
	int		neg;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	lenn = ft_nbrlen(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		lenn++;
		neg++;
		n = -n;
	}
	s = malloc(lenn * sizeof(char) + 1);
	if (s == NULL)
		return (0);
	s[lenn] = '\0';
	n = ft_convnbr(n, lenn, s);
	if (neg == 1)
		s[0] = '-';
	return (s);
}
