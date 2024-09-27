/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:50:47 by iabasala          #+#    #+#             */
/*   Updated: 2024/09/25 15:36:48 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}
// Helper function to create a new node
/*t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// Helper function to print the list
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
    t_list *list = NULL;
    
    // Test adding to an empty list
    ft_lstadd_back(&list, ft_lstnew("First"));
    printf("After adding first node: ");
    print_list(list);
    
    // Test adding to a non-empty list
    ft_lstadd_back(&list, ft_lstnew("Second"));
    printf("After adding second node: ");
    print_list(list);
    
    // Add a few more nodes
    ft_lstadd_back(&list, ft_lstnew("Third"));
    ft_lstadd_back(&list, ft_lstnew("Fourth"));
    printf("After adding more nodes: ");
    print_list(list);

    // Don't forget to free the allocated memory in a real program!

    return (0);
}*/
/*we start with an empty list (t_list *list = NULL;)
We add a node to the empty list
We print the list to see if it worked
We add another node to the non-empty list
We print again to see if it worked
We add a few more nodes and print once more*/