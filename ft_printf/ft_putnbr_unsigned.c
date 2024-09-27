/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:13:28 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/22 10:00:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb <= 9)
	{
		count += ft_putchar(nb + '0');
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar(nb % 10 + '0');
	}
	return (count);
}
