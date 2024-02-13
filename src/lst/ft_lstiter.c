//
// smiro
// ft_lstiter.c
// 2024-02
//

#include "lst.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f) {
		return ;
	}
	while (lst != NULL)
	{
		(*f)(lst->c);
		lst = lst->next;
	}
}
