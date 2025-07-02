/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <zel-baji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 06:05:09 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/19 00:22:50 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num, char c)
{
	char	*hexdigit;
	char	hex[17];
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (c == 'x')
		hexdigit = "0123456789abcdef";
	else
		hexdigit = "0123456789ABCDEF";
	if (num == 0)
		return (ft_putchar('0'));
	while (num > 0)
	{
		hex[i++] = hexdigit[num % 16];
		num /= 16;
	}
	while (--i >= 0)
		count += ft_putchar(hex[i]);
	return (count);
}
