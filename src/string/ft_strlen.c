//
// smiro
// ft_strlen.c
// 2024-02
//

#include "string.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i]) {
		i++;
	}
	return (i);
}
