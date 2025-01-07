/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:59:00 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/07 17:11:07 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	size_t	len;

	if (s == NULL)
		return (ft_putstr("(null)"));
	len = ft_strlen(s);
	write(1, s, len);
	return ((int)len);
}