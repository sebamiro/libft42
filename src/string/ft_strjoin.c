//
// smiro
// ft_putendl_fd.c
// 2024-02
//

#include "std/std.h"
#include "string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*str;

	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(total, 1);
	ft_strlcat(str, s1, total);
	ft_strlcat(str, s2, total);
	return (str);
}
