/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:10:43 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/24 00:02:13 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
    t_list 	*link = NULL;  // Initialize link to NULL
    t_list	*new_node;

    new_node = ft_lstnew("another love");
    ft_lstadd_front(&link, new_node);
    printf("%s\n", (char *)link->content);
    return(0);
}*/
