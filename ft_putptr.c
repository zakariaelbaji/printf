/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <zel-baji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 05:53:04 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/17 21:12:07 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	p;
	int				count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	p = (unsigned long)ptr;
	count = ft_putstr("0x");
	return (count + ft_puthex(p, 'x'));
}
