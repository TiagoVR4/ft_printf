/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:47:05 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/03 14:50:37 by tiagalex         ###   ########.fr       */
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
		if (format[i] == '%')
		{
			args[j] = ft_handle(args[j], )
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return(i);
}

int	main()
{
	ft_printf("alguma coisa");
	return (0);
}