//
// smiro
// ft_putendl_fd.c
// 2024-02
//

#include "string.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0) {
		return (0);
	}
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i]) {
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (!s1[i] && ft_strlen(s1) && i == n) {
		return (0);
	}
	if (i == n && s1[i - 1] == s2[i - 1]) {
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

