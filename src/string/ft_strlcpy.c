//
// smiro
// ft_putendl_fd.c
// 2024-02
//

#include "string.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	i;

	lensrc = ft_strlen(src);
	if (size == 0) {
		return (lensrc);
	}
	i = 0;
	while (i < size - 1 && src[i]) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lensrc);
}
