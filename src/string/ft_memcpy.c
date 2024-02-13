//
// smiro
// ft_memcpy.c
// 2024-02
//

#include "string.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src) {
		return (NULL);
	}
	i = 0;
	while (i < n) {
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
