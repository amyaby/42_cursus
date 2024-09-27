/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:29:19 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/01 23:35:53 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_string;

	new_string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		new_string[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*int main()
{
	char T[]="imane";
	ft_memset(T,'a',2);
	printf("%s\n",T);
	return (0);
}
*/
/*
int	main(void) {
    char str[50];  // Example array to demonstrate memset
    strcpy(str, "Hello, world!");  // Initialize str with a string

    printf("Before memset: %s\n", str);

    ft_memset(str, 'A', 5);  // Fill the first 5 bytes of str with 'A'

    printf("After memset: %s\n", str);

    return (0);
}
*/
