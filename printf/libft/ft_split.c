/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:28:23 by tchappui          #+#    #+#             */
/*   Updated: 2021/11/10 11:24:16 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_sep(char *s, char c)
{
	char	*dest;
	size_t	i;
	size_t	n;
	size_t	b;

	i = 0;
	b = 0;
	n = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		if (s[i] == c || s[i] == '\0')
		{
			dest = malloc(sizeof (char) * (i + 1));
			if (!dest)
				return (0);
			while (n < i)
				dest[b++] = s[n++];
			dest[b] = '\0';
		}
	}
	return (dest);
}

static size_t	ft_nombre(char *s, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 1;
	if (s[i] == c || !s[0])
		x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] > 0 && s[i + 1] != c))
			x++;
		i++;
	}
	return (x);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	size;
	size_t	a;
	size_t	i;

	if (!s)
		return (0);
	a = 0;
	i = 0;
	size = ft_nombre((char *)s, c);
	dest = malloc(sizeof (char *) * (size + 1));
	if (!dest)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			dest[a] = ft_sep((char *)s + i, c);
			i = i + ft_strlen(dest[a++]);
		}
		if (s[i] != '\0')
			i++;
	}
	dest[a] = NULL;
	return (dest);
}
