/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 00:46:23 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/02 02:51:22 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest == src) //ida kano b7al b7al returni dest blama tma7ni rask
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
	//7it lfuction catreturni void machi unsigned char bach ndiro d !!
}
/*int main(void)
{
	char	s1[];
	char	s2[];
	char	src[];

	s1[] = "wlahila bsah Hehe     ";
	s2[] = "wlahila bsah Hehe     ";
	src[] = "wlahila wala";
	printf("%s\n", (char *)ft_memcpy(s1, src, 11));
	printf("%s\n", (char *)memcpy(s2, src, 11));
	return (0);
}
int	main(void)
{
        char s[]="imane";
        char t[]="lsr";
				printf("before :%s\n",s);
        ft_memcpy(s, t, 2);
        printf("after :%s\n",s);
}*/
