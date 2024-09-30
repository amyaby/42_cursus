/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:38:01 by im_ane            #+#    #+#             */
/*   Updated: 2024/09/30 00:53:18 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cases(const char *format, va_list args)
{
	int	print_char;

	print_char = 0;
	if (*format == '%')
		print_char += ft_putchar('%');
	else if (*format == 'c')
		print_char += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		print_char += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
	{
		print_char += ft_putstr("0x");
		print_char += ft_printaddress(va_arg(args, unsigned long));
	}
	else if (*format == 'd' || *format == 'i')
		print_char += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		print_char += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (*format == 'x')
		print_char += ft_printhex(va_arg(args, unsigned int),
				"0123456789abcdef");
	return (print_char);
}

int	ft_print(const char *format, ...)
{
	int		print_char;
	va_list	args;

	print_char = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++;
			print_char += ft_cases(format, args);
		}
		format++;
	}
	va_end(args);
	return (print_char);
}
