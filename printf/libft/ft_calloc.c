/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:51:10 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:34:31 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*dest;

	dest = malloc(elementCount * elementSize);
	if (!dest)
		return (0);
	ft_bzero(dest, elementCount * elementSize);
	return (dest);
}
