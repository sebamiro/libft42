/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:13:47 by seba              #+#    #+#             */
/*   Updated: 2022/08/22 19:10:22 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int
findtype(va_list ap, char c, int ident)
{
	if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'c')
		return (handlechar(ap));
	else if (c == 'd' || c == 'i' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X')
		return (handlenbr(ap, c, ident));
	else if (c == 's')
		return (handlestr(ap, ident));
	else if (c == 'p')
		return (handleptr(ap));
	return (-1);
}

int
ftputstr(const char *s, va_list ap)
{
	int		temp;
	int		total = 0;
	size_t	i = 0;
	int ident;

	while (s[i]) {
		if (s[i] == '%') {
			ident = identcheck((char *)s + ++i);
			while (s[i] >= '0' && s[i] <= '9')
				i++;
			if (s[i] == ':')
				i++;
			temp = findtype(ap, s[i], ident);
		}
		else
			temp = ftputchar(s[i]);
		if (temp < 0)
			return (-1);
		total += temp;
		i++;
	}
	return (total);
}
