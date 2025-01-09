/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:04:56 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/09 14:02:24 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle(va_list args, char type)
{
	int	i;

	i = 0;
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (type == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (type == 'u')
		return (ft_unsigned_putnbr(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 'x'));
	else if (type == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 'X'));
	else if (type == '%')
		return (ft_putchar('%'));
	return (-1);
}
