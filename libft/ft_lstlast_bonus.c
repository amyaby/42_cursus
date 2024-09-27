/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:47:40 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/25 17:52:45 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node_1;
	t_list	*node_2;
	t_list	*last_node;

	head = NULL;
	node_1 = ft_lstnew("the first node");
	node_2 = ft_lstnew("the second node");
	ft_lstadd_front(&head,node_2);
	ft_lstadd_front(&head,node_1);
	last_node = ft_lstlast(head);
	printf("%s\n", (char *)last_node->content);
	return (0);
}
*/
