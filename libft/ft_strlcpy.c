/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:54:20 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/21 22:19:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t max_dest_size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (max_dest_size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (max_dest_size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*int main()
{
 char dest[10];
    const char tab[] = "imane";

    printf("%zu\n", ft_strlcpy(dest, tab, 3));
    printf("%zu\n", strlcpy(dest, tab, 3));
    printf("dest: %s\n", dest);

    printf("%zu\n", ft_strlcpy(dest, tab, 0));
    printf("%zu\n", strlcpy(dest, tab, 0));
    printf("dest: %s\n", dest);
    return (0);
    }
    */
