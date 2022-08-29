/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:03:20 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:30:24 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*sc;
	char		*dt;

	if (!dest && !src)
		return (0);
	sc = (const char *)src;
	dt = (char *)dest;
	while (n--)
	{
		dt[n] = sc[n];
	}
	return (dest);
}
