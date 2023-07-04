/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:25:58 by seba              #+#    #+#             */
/*   Updated: 2022/08/22 19:23:03 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);

int	ftputchar(char c);

int	ftputstr(const char *s, va_list ap);

int	ftputnbr(int n, int ident);

int	ftputuint(unsigned int n);

int	puthexnbr(unsigned int n, char x);

int	putptr(unsigned long long ptr);

int	handlechar(va_list ap);

int	handlenbr(va_list ap, char c, int ident);

int	handlestr(va_list ap, int ident);

int	handleptr(va_list ap);

int	identcheck(char *str);

int	identprint(int ident);

int ft_atoi(const char *str);

#endif
