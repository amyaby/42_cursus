/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:50:51 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/02 14:37:05 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	k;

	i = 0;
	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == k)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char	str[];

	str[] = "Hala ho nana";
	printf("%p\n", ft_memchr(str, 'H', 2));
	printf("%p\n", memchr(str, 'H', 2));
	printf("%p\n", ft_memchr(str, 'b', 5));
        printf("%p\n", memchr(str, 'b', 5));
}
*/
