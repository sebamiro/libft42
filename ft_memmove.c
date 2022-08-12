/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:03:33 by seba              #+#    #+#             */
/*   Updated: 2022/08/11 11:03:35 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	i;
    void	*temp;
    
    temp = ft_calloc(n, sizeof(void));
    temp = ft_memcpy(temp, src, n);
    return ft_memcpy(dest, src, n);
}
