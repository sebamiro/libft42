//
// smiro
// ft_lstlast.c
// 2024-02
//

#include "lst.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next) {
		lst = lst->next;
	}
	return (lst);
}
