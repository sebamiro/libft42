//
// smiro
// ft_putchar_fd.c
// 2024-02
//

#include <unistd.h>

int	ft_putchar_fd(char c, int fd)
{
	return write(fd, &c, 1);
}
