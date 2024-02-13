//
// smiro
// ft_substr.c
// 2024-02
//

#include "std/std.h"
#include "string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len == 0 || start > ft_strlen(s)) {
		return (ft_calloc(1, 1));
	}
	if (len > ft_strlen(s) || (start + len) > ft_strlen(s)) {
		str = ft_calloc((ft_strlen(s) - start + 1), 1);
	} else {
		str = ft_calloc((len + 1), 1);
	}
	if (!str) {
		return (NULL);
	}
	while (i < len && s[start]) {
		str[i++] = s[start++];
	}
	return (str);
}
