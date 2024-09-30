/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:20:42 by im_ane            #+#    #+#             */
/*   Updated: 2024/09/27 13:36:20 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, char *str)
{
	int	i;

	i = 0;
	if (n < 16)
		i += ft_putchar(str[n]);
	if (n >= 16)
	{
		i += ft_printhex(n / 16, str);
		i += ft_printhex(n % 16, str);
	}
	return (i);
}
