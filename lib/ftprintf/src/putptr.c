/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:06:31 by seba              #+#    #+#             */
/*   Updated: 2022/08/22 18:40:51 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int
ptrlen(uintptr_t ptr)
{
	int	total = 1;

	while (ptr >= 16) {
		ptr = ptr / 16;
		total++;
	}
	return (total);
}

static int
printptr(uintptr_t ptr)
{
	int	total  = 0;

	if (ptr >= 16) {
		total += printptr(ptr / 16);
		total += printptr(ptr % 16);
	}
	else if (ptr < 10)
		total += ftputchar((ptr + '0'));
	else
		total += ftputchar(ptr - 10 + 'a');
	return (total);
}

int
putptr(unsigned long long ptr)
{
	int	total  = 0;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	total += write(1, "0x", 2);
	total += printptr(ptr);
	if (total != ptrlen(ptr) + 2)
		return (-1);
	return (total);
}
