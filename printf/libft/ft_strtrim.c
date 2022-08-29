/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:49:25 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:37:09 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_fin(char *s1, char *set)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(s1);
	k = j;
	while (j > 0)
	{
		i = 0;
		while (set[i] != '\0' && set[i] != s1[j - 1])
		{
			i++;
			if (set[i] == '\0')
				return (j);
		}
		j--;
	}
	return (k);
}

static char	*ft_debut(char *s1, char *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (s1[j] != '\0')
	{
		i = 0;
		while (set[i] != '\0' && set[i] != s1[j])
		{
			i++;
			if (set[i] == '\0')
				return (s1 + j);
		}
		j++;
	}
	return (s1 + j);
}	

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	char	*dest2;
	size_t	i;
	size_t	size;

	if (!s1)
		return (0);
	if (!set[0])
		return (ft_strdup(s1));
	i = 0;
	dest2 = ft_debut((char *)s1, (char *)set);
	size = ft_fin(dest2, (char *)set);
	dest = malloc(sizeof (char) * (size + 1));
	if (!dest)
		return (0);
	while (dest2[i] != '\0' && i < size)
	{
		dest[i] = dest2[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
