/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handletype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:37:09 by seba              #+#    #+#             */
/*   Updated: 2022/08/22 19:16:53 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int
handlechar(va_list ap)
{
	char c = (char)va_arg(ap, int);
	return (write(1, &c, 1));
}

int
handlenbr(va_list ap, char c,  int ident)
{
	if (c == 'd' || c == 'i')
		return (ftputnbr(va_arg(ap, int), ident));
	else if (c == 'u')
		return (ftputuint(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (puthexnbr(va_arg(ap, unsigned int), c));
	return (-1);
}

static size_t
ft_strlen(const char *str)
{
	size_t i = 0;
	while (str[i])
		i++;
	return i;
}

int
handlestr(va_list ap, int ident)
{
	char	*str;
	int		total = 0;
	size_t	i = 0;

	str = va_arg(ap, char *);
	if (!str)
		return (write(1, "(null)", 6));
	if (ident && ident > 0)
		identprint(ident - ft_strlen(str));
	while (str[i]) {
		if (ftputchar(str[i]) < 0)
			return (-1);
		total += 1;
		i++;
	}
	if (ident && ident < 0)
		identprint(ident * -1 - ft_strlen(str));
	return (total);
}

int
handleptr(va_list ap)
{
	unsigned long long	n;

	n = va_arg(ap, unsigned long long);
	return (putptr(n));
}
