//
// smiro
// ft_putendl_fd.c
// 2024-02
//

#include <unistd.h>

#include "io.h"

int	ft_putendl_fd(const char *s, int fd)
{
	return ft_putstr_fd(s, fd) + write(fd, "\n", 1);
}
