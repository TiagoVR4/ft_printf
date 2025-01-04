/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:24:11 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/04 16:30:19 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_ptr(void *n, char	type)
{
	unsigned long	address;

	address = (unsigned long)n;
	write(1, "0x", 2);
	if (address == 0)
	{
		write(1, "0", 1);
		return ;
	}
	hexlower(address);
}