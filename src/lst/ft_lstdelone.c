//
// smiro
// ft_lstdelone.c
// 2024-02
//

#include <stdlib.h>

#include "lst.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del) {
		return ;
	}
	(*del)(lst->c);
	free(lst);
}
