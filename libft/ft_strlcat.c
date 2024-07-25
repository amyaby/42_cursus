/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:04:44 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/03 14:53:09 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
	{
		i++;
	}
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src)); //i raha hya length dyal dst li 7sbna
}
/*int	main(void)
{
    char tab[11]="hello";
    const char *tabl="imane";
    ft_strlcat(tab, tabl, 11);
    printf("%s",tab);
    strlcat(tab, tabl, 11);
        printf("%s",tab);
}
*/
