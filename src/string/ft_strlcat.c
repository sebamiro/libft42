//
// smiro
// ft_strlcat.c
// 2024-02
//

#include "string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	j = lendst;
	if (size <= lendst) {
		return (size + lensrc);
	}
	while (j < size - 1 && src[i]) {
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (lendst + lensrc);
}
