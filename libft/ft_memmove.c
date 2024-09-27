/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:49:58 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/02 13:01:11 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
/*	int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Overlapping Example";
    
    // Test non-overlapping
    printf("Original str1: %s\n", str1);
    ft_memmove(str1 + 7, str1, 6);
    printf("After ft_memmove (non-overlapping): %s\n", str1);
memmove(str1 + 7, str1, 6);
    printf("After memmove (non-overlapping): %s\n", str1);
    // Test overlapping
    printf("Original str2: %s\n", str2);
    ft_memmove(str2 + 10, str2 + 5, 11);
    printf("After ft_memmove (overlapping): %s\n", str2);
     memmove(str2 + 10, str2 + 5, 11);
    printf("After memmove (overlapping): %s\n", str2);
    return (0);
}
*/
