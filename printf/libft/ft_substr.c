/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:56:43 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:36:00 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*dest;

	i = 0;
	if (!s)
		return (0);
	if ((start + len) > ft_strlen(s))
		dest = malloc(ft_strlen(s) + 1 * sizeof(char));
	else
		dest = malloc(len * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (i < len && s[start] && start < ft_strlen(s))
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
