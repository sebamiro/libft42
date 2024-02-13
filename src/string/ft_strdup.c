//
// smiro
// ft_strdup.c
// 2024-02
//

#include "string.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	str[len--] = '\0';
	while (len >= 0) {
		str[len] = s[len];
		len--;
	}
	return (str);
}
