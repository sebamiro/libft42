//
// smiro
// ft_bzero.c
// 2024-02
//

#include "string.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

