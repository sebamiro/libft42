//
// smiro
// ft_strmapi.c
// 2024-02
//

#include "std/std.h"
#include "string.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f) {
		return NULL;
	}
	i = 0;
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	while (s[i]) {
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
