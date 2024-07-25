/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:55:20 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/21 13:32:11 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_mbr(int n)
{
	int				len;
	unsigned int	num;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		num = -1 * n;
	len++;
	num = n;
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int len;
	unsigned int num;
	char *str;

	len = len_of_mnr(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		num = -n;
		str[0] = '-';
		while (len > 1)
		{
			str[--len] = (num % 10) + '0';
			num /= 10;
		}
		else
		{
			num = n;
			while (len > 0)
			{
				str[--len] = (num % 10) + '0';
				num /= 10;
			}
		}
		return (str);
	}
	/*
int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}*/
