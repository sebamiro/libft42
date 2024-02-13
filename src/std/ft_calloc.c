//
// smiro
// ft_calloc.c
// 2024-02
//

#include <stdlib.h>

#include "string/string.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;

	res = malloc (n * size);
	if (!res) {
		return NULL;
	}
	ft_bzero(res, n * size);
	return (res);
}
