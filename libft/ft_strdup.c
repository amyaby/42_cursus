/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:16:14 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/06 16:05:25 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, str, ft_strlen(str));
	return (dup);
}

/*int	main(void)
{
	char	word[];

	word[] = "hello";
	printf("%s\n", ft_strdup(word));
	printf("%s\n", strdup(word));
}
*/
