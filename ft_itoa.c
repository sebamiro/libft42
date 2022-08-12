/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:02:53 by seba              #+#    #+#             */
/*   Updated: 2022/08/11 11:02:57 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill(char *str, int n)
{
	if (n == -2147483648)
	{
		ft_strlcat(str, "-2147483648",12);
	}
	else if (n < 0)
	{
		str[0] = '-';
		fill(str, -n);
	}
	else if (n > 9)
	{
		fill(str, n/10);
		fill(str, n%10);
	}
	else
		str[ft_strlen(str)] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*str;

	str = ft_calloc(13, sizeof(char));
	if (!str)
		return NULL;
	fill(str, n);
	return str;
}
