/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:26:58 by sjoukni           #+#    #+#             */
/*   Updated: 2024/11/26 14:56:11 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nbr)
{
	unsigned int	nb;
	char			*base;
	int				count;

	base = "0123456789abcdef";
	nb = (unsigned int)nbr;
	count = 0;
	if (nb / 16 > 0)
		count += ft_puthexa(nb / 16);
	count += ft_putchar(base[nb % 16]);
	return (count);
}
