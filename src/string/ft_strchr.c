//
// smiro
// ft_strchr.c
// 2024-02
//

#include "string.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s) {
		return (NULL);
	}
	while (*s) {
		if ((char)c == *s) {
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
