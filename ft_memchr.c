/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:03:04 by seba              #+#    #+#             */
/*   Updated: 2022/08/11 11:03:06 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    if (s == NULL)
        return (NULL);
    while (i < n)
    {
        if (*(unsigned char*)(s +i) == (unsigned char)c)
            return ((void*)(s + i));
        i++;
    }
    return (NULL);
}
