/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:31:05 by iabasala          #+#    #+#             */
/*   Updated: 2024/09/26 18:57:31 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*temp;
	t_list	*new_lst;

	new_lst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		if (!new_lst)
			new_lst = new_node;
		else
		{
			temp = new_lst;
			while (temp->next)
				temp = temp->next;
			temp->next = new_node;
		}
		lst = lst->next;
	}
	return (new_lst);
}
