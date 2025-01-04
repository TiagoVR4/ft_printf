/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:47:05 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/04 14:25:35 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int j;
	va_list	args;
	va_start(args, format);

	i = 0;
	j = 0;
	while(format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			j = j + ft_handle(args, format[i + 1]);
			i++;
		}
		else
			ft_putchar_fd(format[i], 1);
			j++;
		i++;
	}
	va_end(args);
	return(j);
}

int	main()
{
	ft_printf("alguma coisa");
	return (0);
}