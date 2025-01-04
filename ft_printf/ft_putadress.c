/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:19:19 by sjoukni           #+#    #+#             */
/*   Updated: 2024/11/26 15:00:05 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(unsigned long long nb)
{
	char			*base;
	int				count;

	base = "0123456789abcdef";
	count = 0;
	if (nb / 16 > 0)
		count += ft_puthex(nb / 16);
	count += ft_putchar(base[nb % 16]);
	return (count);
}

int	ft_putadress(unsigned long long ptr)
{
	int					count;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_puthex(ptr);
	return (count);
}
