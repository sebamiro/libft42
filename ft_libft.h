#include <string.h>
#ifndef _libft
#define _libft

void    ft_putchar(char c);
void    ft_putstr(char const *s);
size_t  ft_strlen(char  *str);
char    *ft_strcpy(char *dest, char const *str);
char    *ft_stnrcpy(char *dest, char const *str, size_t n);

#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_strlen.c"
#include "ft_strcpy.c"
#include "ft_strncpy.c"
#endif
