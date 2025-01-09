/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:14:05 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/09 11:41:23 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

// Funtions
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_puthex(unsigned long long n, char type);
int		ft_putptr(void *n);
int		ft_putnbr(int n);
int		ft_unsigned_putnbr(unsigned int n);
int		ft_handle(va_list args, char type);

size_t	ft_strlen(const char *str);

void ft_strcpy(char *dest, const char *src);


#endif
