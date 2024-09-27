/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 23:47:33 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/02 00:41:29 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int main()
{
	char	s1[];
	char	s2[];

	char dtr[]="imane";
	printf("%s\n",dtr);
	ft_bzero(dtr,2);
	printf("%s\n",dtr);
	bzero(dtr,2);
			  printf("%s\n",dtr);
	return (0);
}*/
/*int	main(void)
{
	s1[] = "Long String String";
	s2[] = "Long String String";
 	ft_bzero((s1 + 12), 4);
	printf("Custom ==> %s\n", s1);
	bzero((s2 + 12), 4);
	printf("Original ==> %s\n", s2);
}
*/
