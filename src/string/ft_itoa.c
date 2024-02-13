//
// smiro
// ft_putendl_fd.c
// 2024-02
//

#include <limits.h>

#include "string.h"
#include "std/std.h"

static void	fill(char *str, int n)
{
	if (n == INT_MIN) {
		ft_strlcat(str, "-2147483648", 12);
	} else if (n < 0) {
		str[0] = '-';
		fill(str, -n);
	} else if (n > 9) {
		fill(str, n / 10);
		fill(str, n % 10);
	}
	else {
		str[ft_strlen(str)] = n + '0';
	}
}

static size_t	count(int n)
{
	size_t	i;

	i = 2;
	if (n == INT_MIN) {
		return (12);
	}
	if (n < 0) {
		n = -n;
		i++;
	}
	while (n > 9) {
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = ft_calloc(count(n), sizeof(char));
	if (!str) {
		return NULL;
	}
	fill(str, n);
	return (str);
}
