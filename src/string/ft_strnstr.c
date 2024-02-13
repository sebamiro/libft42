//
// smiro
// ft_putendl_fd.c
// 2024-02
//

#include "string.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(little) == 0) {
		return ((char *)big);
	}
	i = 0;
	j = 0;
	while (i < n && big[i]) {
		if (big[i] == little[j]) {
			while (big[i] == little[j] && big[i] && i < n) {
				i++;
				j++;
			}
			if (!little[j]) {
				return ((char *)(big + (i - j)));
			}
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
