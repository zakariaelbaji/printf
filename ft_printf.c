/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <zel-baji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:43:12 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/18 21:52:32 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_puthex(va_arg(args, unsigned int), 'x');
	else if (format == 'X')
		count += ft_puthex(va_arg(args, unsigned int), 'X');
	else if (format == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (format == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			count += handle_format(*format, args);
		}
		else
		{
			count += ft_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
