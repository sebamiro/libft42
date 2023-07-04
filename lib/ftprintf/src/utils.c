#include "ft_printf.h"

int
ft_atoi(const char *n)
{
	int	i = 0;
	int	m = 1;
	int	b = 0;

	while (n[i] >= 9 && n[i] <= 13)
		i++;
	if (n[i] == '+' || n[i] == '-')
		if (n[i++] == '-')
			m = -m;
	while (n[i] >= '0' && n[i] <= '9') {
		b = b * 10 + (n[i] - '0');
		i++;
	}
	return (b * m);
}
