/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:33:04 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/21 22:08:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t block, size_t size_block)
{
	void	*array;

	array = malloc(block * size_block);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, block * size_block);
	return (array);
}
/*int main()
{
	int	*p;

int		*p = ft_calloc(10,sizeof(int));
printf("%p\n",(void *)p);
int		*q = calloc(10,sizeof(int));
printf("%p\n",(void *)q);
 free(p);
    free(q);
return (0);
}*/
/*
int	main(void)
{
	p = calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("calloc failed\n");
	}
	for (int i = 0; i < 10; i++)
	{
		//if (p[i] != 0)
		//{
		//	printf("memory not zeroed at index %d\n", i);
		//}
        if (p[i] == 0)
        {
            printf("memory zeroed at index %d\n", i);
        }
        else
        {
            printf("memory not zeroed at index %d\n", i);
        }
    }
	printf("memory successfully zeroed\n");
	free(p);
	return (0);
}
*/
