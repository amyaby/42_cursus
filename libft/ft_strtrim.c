/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 03:05:09 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/08 14:15:56 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimed_s;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > 0 && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	trimed_s = (char *)malloc(len + 1);
	if (!trimed_s)
		return (NULL);
	ft_strlcpy(trimed_s, s1 + start, len + 1);
	return (trimed_s);
}
/*int main()
{
    char *set = "im";
    char *s = "imABCim";
    char *trimmed = ft_strtrim(s, set);

    if (trimmed)
    {
        printf("Original: '%s'\n", s);
        printf("Trimmed: '%s'\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return (0);
}*/
