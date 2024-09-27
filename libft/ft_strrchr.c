/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:35:18 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/21 16:34:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (len > 0 && str[len] != (char)c)
	{
		len--;
		if ((unsigned char)str[len] == (unsigned char)c)
			return ((char *)(str + len));
	}
	if ((unsigned char)str[len] == (unsigned char)c)
	{
		return ((char *)(str + len));
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	s[];

// 	s[] = "imane abasalah";
// 	printf("%p\n", ft_strrchr(s, 'a'));
// 	printf("%p\n", strrchr(s, 'a'));
// }
