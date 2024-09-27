/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:59:49 by iabasala          #+#    #+#             */
/*   Updated: 2024/09/26 18:59:51 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*void del(void *content)
{
    free(content);
}
int	main(void)
{
    t_list *node = malloc(sizeof(t_list));
    node -> content = strdup("Hello");
    node -> next = NULL;

    ft_lstdelone(node, del);
    return (0);
}*/
