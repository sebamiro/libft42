//
// smiro
// ft_lstadd_back.c
// 2024-02
//

#include "lst.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	if (!*lst) {
		*lst = n;
	} else {
		ft_lstlast(*lst)->next = n;
	}
}
