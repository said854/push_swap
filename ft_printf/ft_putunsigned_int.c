/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsined_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:00:02 by sjoukni           #+#    #+#             */
/*   Updated: 2024/11/26 12:24:16 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_int(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_putchar((char)(n + '0'));
	else
	{
		count += ft_putunsigned_int(n / 10);
		count += ft_putunsigned_int(n % 10);
	}
	return (count);
}
