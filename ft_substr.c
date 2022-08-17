/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:06:42 by seba              #+#    #+#             */
/*   Updated: 2022/08/16 15:51:10 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len > ft_strlen(s))
		str = ft_calloc((ft_strlen(s) + 1), 1);
	else
		str = ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len && s[start])
		{
			str[i] = s[start];
			start++;
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
