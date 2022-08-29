/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:44:01 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:32:53 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *cherche, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (cherche[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i + j] == cherche[j] && i + j < len)
		{
			j++;
			if (cherche[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (0);
}
