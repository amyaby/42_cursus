/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:54:29 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/21 16:18:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			return (d + i + 1);
		}
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char	D[50];
	char	T[];

	T[] = "I'm not stupid";
	printf("%s\n", T);
	ft_memccpy(D, T, 't', 5);
	printf("%s\n", D);
	memccpy(D, T, 't', 5);
	printf("%s\n", D);
	ft_memccpy(D, T, 't', sizeof(T));
	printf("%s\n", D);
	memccpy(D, T, 't', sizeof(T));
	printf("%s\n", D);
	return (0);
}
*/
