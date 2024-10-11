/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:17:19 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/11 04:58:10 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
 while (*str)
    {
        if (*str == (char)c)
            return (char *)str;
        str++;
    }
    if (*str == (char)c) // Check if 'c' is the null terminator
        return (char *)str;
    return (NULL);
}
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    size_t i;

    if (!dest || !src)
        return (NULL);
    if (dest == src)
        return dest;

    for (i = 0; i < n; i++)
        d[i] = s[i];

    return dest;
}
char *ft_strdup(const char *str)
{
    char    *dup;
    size_t  len;

    len = ft_strlen(str) + 1;
    dup = (char *)malloc(len);
    if (dup == NULL)
        return (NULL);
    ft_memcpy(dup, str, len);
    return (dup);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i = 0, j = 0;
    size_t len1 = 0;
    size_t len2 = 0;

    if(!s1 && !s2)
        return NULL;
    if (s1)
        len1 = ft_strlen(s1);
    if (s2)
        len2 = ft_strlen(s2);
    str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (!str)
        return (NULL);
    while (i < len1)
    {
        str[i] = s1[i];
        i++;
    }
    while (j < len2)
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';

    return str;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_string;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_string = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_string)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub_string[i] = s[start + i];
		i++;
	}
	sub_string[len] = '\0';
	return (sub_string);
}
