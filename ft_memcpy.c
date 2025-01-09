/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:35:01 by tiagalex          #+#    #+#             */
/*   Updated: 2025/01/09 14:00:46 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*c_src;
	unsigned char	*c_dest;
	size_t			i;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	i = 0;
	if (c_src == NULL && c_dest == NULL)
		return (NULL);
	while (len > i)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}