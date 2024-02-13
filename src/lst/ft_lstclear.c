//
// smiro
// ft_lstclear.c
// 2024-02
//

#include "lst.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst) {
		return ;
	}
	while (lst && *lst) {
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, (*del));
	}
}
