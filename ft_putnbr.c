/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:40:23 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/09 14:01:19 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		i;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		nb *= (-1);
		ft_putchar('-');
		i++;
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
	i++;
	return (i);
}
