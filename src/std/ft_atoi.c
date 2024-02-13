//
// smiro
// ft_atoi.c
// 2024-02
//

#include "type/type.h"

int	ft_atoi(const char *n)
{
	int	i = 0;
	int	m = 1;
	int	b = 0;

	while (ft_isspace(n[i])) {
		i++;
	}
	if (n[i] == '+' || n[i] == '-') {
		if (n[i++] == '-') {
			m = -m;
		}
	}
	while (n[i] >= '0' && n[i] <= '9') {
		b = b * 10 + (n[i] - '0');
		i++;
	}
	return (b * m);
}
