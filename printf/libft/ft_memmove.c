/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:53:31 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:30:45 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dt;
	char	*sc;

	if (!dest && !src)
		return (0);
	i = 0;
	dt = (char *)dest;
	sc = (char *)src;
	if (dt > sc)
	{
		while (n--)
		{
			dt[n] = sc[n];
		}
	}
	else
	{
		while (i < n)
		{
			dt[i] = sc[i];
			i++;
		}
	}	
	return (dest);
}
