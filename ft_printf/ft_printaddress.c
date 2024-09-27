/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 01:05:07 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/09 01:05:12 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_printaddress(unsigned long n)
{
	int		i;
	char	str[];

	str[] = "0123456789abcdef";
	i = 0;
	if (n < 16)
		i += ft_putchar(str[n]);
	else
	{
		i += ft_printaddress(n / 16);
		i += ft_putchar(n % 16);
	}
	return (i);
}
