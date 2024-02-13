//
// smiro
// ft_lstnew.c
// 2024-02
//

#include "lst.h"

t_list	*ft_lstnew(void *c)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	res->c = c;
	res->next = NULL;
	return (res);
}
