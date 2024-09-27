/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:18:37 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/02 19:37:20 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	s1[] = "halab";
	char	s2[] = "halaa";

	printf("%d\n", ft_memcmp(s1, s2, 4));
	printf("%d\n", memcmp(s1, s2, 4));
	printf("%d\n", ft_memcmp(s1, s2,
				5));                                              printf("%d\n",
			memcmp(s1, s2, 5));
		printf("%d\n", ft_memcmp(s2, s1,
					5));                                              printf("%d\n",
				memcmp(s2, s1, 5));
	return (0);
}*/
