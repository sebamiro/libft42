/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:04:20 by seba              #+#    #+#             */
/*   Updated: 2022/08/11 11:04:23 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	totalPalabras(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
			while (s[i] == c)
				i++;
			i--;
		}
		i++;
	}
	return (j + 2);
}

static size_t	totalLetras(char const *s, size_t *j, char c)
{
	size_t	i;
	size_t	m;
	
	m = *j;
	while (s[*j] != c && s[*j])
		*j = *j + 1;
	i = *j - m;
	while (s[*j] == c)
		*j = *j + 1;
	return i;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	t;

	j = 0;
	i = 0;
	s2 = ft_strtrim(s, (char*)ft_calloc(2, sizeof(char*)));
	str = ft_calloc(totalPalabras(s2, c), sizeof(char*));
	if (!str)
		return NULL;
	while (i < totalPalabras(s2, c) - 1)
	{
		t = j;
		str[i] = ft_substr(s2, t, totalLetras(s2, &j, c));
		printf("%li %li %li %s %s\n", i, t, j, str[0], str[i]); 
		if (str[i] == NULL)
		{
			if (i == 0)
				return NULL;
			while (i)
			{
				free(str[i]);
				i--;
			}
			return NULL;
		}
		i++;
	}	
	return str;
}
