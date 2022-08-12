/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:06:23 by seba              #+#    #+#             */
/*   Updated: 2022/08/11 11:06:27 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
        while (i && c != s[i])
                i--;
        if (c == s[i])
                return ((char *)s + i);
        return 0;
}
