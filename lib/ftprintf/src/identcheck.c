#include "ft_printf.h"

int
identcheck(char *str)
{
	int n = 0;

	if (str[0] >= '0' && str[0] <= '9')
		n = ft_atoi(str);
	while (*str && *str >= '0' && *str <= '9')
		str++;
	if (*str == ':')
		n  = -n;
	return n;
}

int
identprint(int n)
{
	int w = 0;

	if (n < 0)
		return 0;
	for (int i = 0; i < n; i++) {
		w += write(1, " ", 1);
	}
	if (w != n - 1)
		return -1;
	return w;
}
