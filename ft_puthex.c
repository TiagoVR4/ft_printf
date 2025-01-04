/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 13:05:44 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/04 16:22:36 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n, char type)
{
	int	i;
	
	i = 0;
	if (type == 'x')
		hexlower(n);
	if (type == 'X')
		hexupper(n);
	if (type == 'p')
		hexptr((void *)(unsigned long)n);
	i = count_hex(n);
	return (i);
}
static void	hexlower(unsigned int n)
{
	char	base[] = "0123456789abcdef";
	char	buffer[16];

	int i;

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (n > 0)
	{
		buffer[i] = base[n % 16];
		n/= 16;
		i++;
	}
	while (i-- > 0)
		write (1, &buffer[i], 1);
}
static void	hexupper(unsigned int n)
{
	char	base[] = "0123456789ABCDEF";
	char	buffer[16];

	int i;

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (n > 0)
	{
		buffer[i] = base[n % 16];
		n/= 16;
		i++;
	}
	while (i-- > 0)
		write (1, &buffer[i], 1);
}
void hexptr(void *ptr)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	write(1, "0x", 2);
	if (address == 0)
	{
		write(1, "0", 1);
		return ;
	}
	hexlower(address);
}
static int	count_hex(unsigned int n)
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