/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:03:16 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/22 10:53:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb >= 0 && nb <= 9)
	{
		count += ft_putchar(nb + '0');
	}
	else if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
		count += ft_putnbr(nb);
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar(nb % 10 + '0');
	}
	return (count);
}
