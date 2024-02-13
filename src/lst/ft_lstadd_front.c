//
// smiro
// ft_lstadd_front.c
// 2024-02
//

#include "lst.h"

void	ft_lstadd_front(t_list **lst, t_list *n)
{
	n->next = *lst;
	*lst = n;
}
