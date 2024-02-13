//
// smiro
// ft_putstr_fd.c
// 2024-02
//

#include <unistd.h>
#include "string/string.h"

int	ft_putstr_fd(const char *s, int fd)
{
	return write(fd, s, ft_strlen(s));
}
