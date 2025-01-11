/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 13:05:44 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/11 19:55:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexlower(unsigned long long n)
{
	char	*base;
	char	buffer[16];
	int		i;
	int		j;

	i = 0;
	j = 0;
	base = "0123456789abcdef";
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
	j = i;
	while (i-- > 0)
		write (1, &buffer[i], 1);
	return (j);
}

static int	hexupper(unsigned long long n)
{
	char	*base;
	char	buffer[16];
	int		i;
	int		j;

	i = 0;
	j = 0;
	base = "0123456789ABCDEF";
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
	j = i;
	while (i-- > 0)
		write (1, &buffer[i], 1);
	return (j);
}
/* 
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
} */

int	ft_puthex(unsigned long long n, char type)
{
	int	i;

	i = 0;
	if (type == 'x')
		i = hexlower(n);
	else if (type == 'X')
		i = hexupper(n);
	return (i);
}
