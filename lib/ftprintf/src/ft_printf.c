/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:37:13 by seba              #+#    #+#             */
/*   Updated: 2022/08/22 18:26:45 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int
ft_printf(const char *s, ...)
{
	int		total;
	va_list	ap;

	va_start(ap, s);
	total = ftputstr(s, ap);
	va_end(ap);
	return (total);
}
