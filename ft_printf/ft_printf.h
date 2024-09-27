/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:07:17 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/22 10:01:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printaddress(unsigned long n);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_printhex(unsigned int n, char *str);
int	ft_putstr(char *str);
#endif
