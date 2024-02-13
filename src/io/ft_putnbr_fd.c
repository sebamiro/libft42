//
// smiro
// ft_putnbr_fd.c
// 2024-02
//

#include <limits.h>
#include <unistd.h>

#include "io.h"

int	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN) {
		return ft_putstr_fd("-2147483648", fd);
	} else if (n < 0) {
		return write(fd, "-", 1) + ft_putnbr_fd(-n, fd);
	} else if (n > 9) {
		return ft_putnbr_fd(n / 10, fd) + ft_putnbr_fd(n % 10, fd);
	} else {
		return ft_putchar_fd(n + '0', fd);
	}
}
