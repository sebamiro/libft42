//
// smiro
// ft_strrchr.c
// 2024-02
//

#include "string.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i && (char)c != s[i]) {
		i--;
	}
	if ((char)c == s[i]) {
		return ((char *)s + i);
	}
	return (0);
}
