/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:24:11 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/09 14:01:26 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *n)
{
	int	i;

	i = 0;
	if (n == NULL)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_puthex((unsigned long long)n, 'x');
	return (i);
}
