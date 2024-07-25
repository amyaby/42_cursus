/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:48:19 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/06 16:04:38 by im_ane           ###   ########.fr       */
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
	// Check if 'c' is the null terminator
	// si le caractere li kan9albo 3lih howa null terminator
	if ((unsigned char)str[i] == (unsigned char)c)
	{
		return ((char *)(str + i)); // Return a pointer to the null terminator
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
