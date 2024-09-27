/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:13:10 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/24 01:03:47 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main(void)
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");

    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node1);

    printf("List size: %d\n", ft_lstsize(head));  // Should print "List size: 2"
    return (0);
}*/

/*int	main(void)
{
	t_list 	*link;
	t_list	*new_node;

	new_node = ft_lstnew("Node 1");
	ft_lstadd_front(&link, new_node);
	ft_putstr_fd((char *)link->content, 1);
	return(0);
}*/
