/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 04:30:35 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/21 13:13:24 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char	increment_by_one(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}
int	main(void)
{
	char	str[];

	str[] = "12345678\n";
	printf("%s", ft_strmapi(str, increment_by_one));
}
*/
