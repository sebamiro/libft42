//
// smiro
// ft_lstmap.c
// 2024-02
//

#include "lst.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	if (!f || !del) {
		return NULL;
	}
	while (lst) {
		new = ft_lstnew((*f)(lst->c));
		if (!new) {
			ft_lstclear(&head, (*del));
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
