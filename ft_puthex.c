/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 13:05:44 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/07 15:22:48 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


static int	hexlower(unsigned int n)
{
	char	base[] = "0123456789abcdef";
	char	buffer[16];

	int i;

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

static int	hexupper(unsigned int n)
{
	char	base[] = "0123456789ABCDEF";
	char	buffer[16];

	int i;

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
int	ft_puthex(unsigned int n, char type)
{
	int	i;
	
	i = 0;
	if (type == 'x')
		i = hexlower(n);
	if (type == 'X')
		i = hexupper(n);
	return (i);
}