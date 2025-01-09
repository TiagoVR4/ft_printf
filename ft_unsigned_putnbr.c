/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:23:04 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/09 14:01:44 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int n)
{
	unsigned long	nb;
	int				i;

	i = 0;
	nb = n;
	if (nb >= 10)
	{
		i += ft_unsigned_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
	i++;
	return (i);
}
