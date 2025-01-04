/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:04:56 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/04 15:54:23 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle(va_list args, char type)
{
	int i;

	i = 0;
	if (type == 'c')
		return (ft_putchar(va_arg(args, char)));
	if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (type == 'p')
		return (ft_puthex(va_arg(args, void *), type));
	if (type == 'x')
		return (ft_puthex(va_arg(args, void *), type));
	if (type == 'X')
		return (ft_puthex(va_arg(args, void *), type));
}