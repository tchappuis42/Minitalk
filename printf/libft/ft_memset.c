/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:25:31 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:29:42 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*dest;
	char	v;

	dest = (char *)b;
	v = (char)c;
	i = 0;
	while (i < len)
	{
		dest[i] = v;
		i++;
	}
	return (dest);
}
