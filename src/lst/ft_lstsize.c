//
// smiro
// ft_putendl_fd.c
// 2024-02
//

#include "lst.h"

size_t ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst) {
		i++;
		lst = lst->next;
	}
	return (i);
}
