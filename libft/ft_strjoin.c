/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 02:36:07 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/21 21:53:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!concat_str)
		return (NULL);
	ft_strlcpy(concat_str, s1, len1 + 1);
	ft_strlcpy(concat_str + len1, s2, len2 + 1);
	return (concat_str);
}

/*int main()
{
	printf("%s\n",ft_strjoin("I'm a genius"," student"));
	return(0);
}
*/
