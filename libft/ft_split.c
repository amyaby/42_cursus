/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:17:04 by im_ane            #+#    #+#             */
/*   Updated: 2024/09/25 15:35:22 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words_counter(char const *s, char c)
{
	int	countword;

	countword = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			countword++;
			while (*s && *s != c)
				s++;
		}
	}
	return (countword);
}

static void	ft_array_spliter(char const *s, char **strs, int words, char c)
{
	int	i;
	int	j;
	int	beg;
	int	len;

	(1) && (i = 0, j = 0);
	while (i < words)
	{
		while (s[j] == c)
			j++;
		beg = j;
		while (s[j] && s[j] != c)
			j++;
		len = j - beg;
		strs[i] = ft_substr(s, beg, len);
		if (!(strs[i]))
		{
			while (i > 0)
				free(strs[--i]);
			free(strs);
			return ;
		}
		i++;
	}
	strs[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		nbr_of_words;
	char	**strs;

	if (!s)
		return (NULL);
	nbr_of_words = ft_words_counter(s, c);
	strs = (char **)malloc(sizeof(char *) * (nbr_of_words + 1));
	if (!strs)
		return (NULL);
	ft_array_spliter(s, strs, nbr_of_words, c);
	return (strs);
}
/*int	main(void)
{
	int		i;
	char	c;
	char	**strs;
	char	s[50];

	s[50] = " imane abasalah oooof";
	c = ' ';
	i = 0;
	strs = ft_split(s, c);
	if (!strs)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]); // Free each allocated string
		i++;
	}
	free(strs); // Free the array of pointers
	return (0);
}*/
