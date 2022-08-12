/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:27:39 by seba              #+#    #+#             */
/*   Updated: 2022/08/12 13:45:48 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;
	t_list	*new;

	head = NULL;
	temp = lst;
	while (temp)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&head, del);
			return NULL;
		}
		ft_lstadd_back(&head, new);
		temp = temp->next;
	}
}
