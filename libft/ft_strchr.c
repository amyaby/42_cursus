/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:48:19 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/21 16:29:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if ((unsigned char)str[i] == (unsigned char)c)
	{
		return ((char *)(str + i));
	}
	return (NULL);
}
/*int main ()
{
	char *s="imane";
	printf("%s\n",ft_strchr(s,'a'));
				printf("%s\n",strchr(s,'a'));
	return (0);
}
*/
/*int	main(void)
{
	char	str[];

	str[] = "hello world";
	printf("%p\n", ft_strchr(str, '\0'));
	printf("%p\n", strchr(str, '\0'));
	return (0);
}
*/
