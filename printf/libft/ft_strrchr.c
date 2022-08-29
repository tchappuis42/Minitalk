/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:06:55 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:31:33 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			dest = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		dest = (char *)&s[i];
	return (dest);
}
