/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 02:36:07 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/07 03:04:33 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *concat_str;
	size_t len1;
	size_t len2;
	len1= ft_strlen(s1);
	        len1= ft_strlen(s2);

	if(!s1 || !s2)
		return(NULL);
	concat_str = malloc((len1+len2+1)*sizeof(char));
	if(!concat_str)
		return(NULL);
	ft_strcpy(concat_str,s1);
	ft_strcpy(concat_str + len1,s2);
	return concat_str;
}

/*int main()
{
	printf("%s\n",ft_strjoin("I'm a genius"," student"));
	return(0);
}
*/
