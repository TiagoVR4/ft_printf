/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 13:05:44 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/08 15:49:45 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	hexlower(unsigned long long n)
{
	char	*base;
	char	buffer[16];
	int		i;

	*base = "0123456789abcdef";
	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		buffer[i] = base[n % 16];
		n /= 16;
		i++;
	}
	while (i-- > 0)
		write (1, &buffer[i], 1);
	return (i + 1);
}

static int	hexupper(unsigned long long n)
{
	char	*base;
	char	buffer[16];
	int		i;

	*base = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		buffer[i] = base[n % 16];
		n /= 16;
		i++;
	}
	while (i-- > 0)
		write (1, &buffer[i], 1);
	return (i + 1);
}

static int	count_hex(unsigned long long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

int	ft_puthex(unsigned long long n, char type)
{
	int	i;

	i = 0;
	if (type == 'x')
		i = hexlower(n);
	else if (type == 'X')
		i = hexupper(n);
	return (count_hex(n));
}
