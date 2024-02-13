//
// smiro
// ft_memmove.c
// 2024-02
//

#include "string.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src) {
		n--;
		while (n >= 0) {
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
			n--;
		}
	} else {
		while (i < n) {
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}
