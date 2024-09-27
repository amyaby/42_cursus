/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:47:10 by im_ane            #+#    #+#             */
/*   Updated: 2024/09/26 12:34:06 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int main()
{
	t_list	*head;
	char	str[];

	str[] = "hadchi ma bghach ydkhol lmockhi";
	head = ft_lstnew((void *)str);
	printf("%s\n",(char *)head->content);
	free(head);
}
*/
