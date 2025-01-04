/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:35:24 by sjoukni           #+#    #+#             */
/*   Updated: 2024/11/27 16:12:07 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char c, va_list args)
{
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (c == 'x')
		return (ft_puthexa(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_puthexa_upper(va_arg(args, unsigned int)));
	else if (c == 'u')
		return (ft_putunsigned_int(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (ft_putadress(va_arg(args, unsigned long long )));
	else
		return(ft_putchar('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		total_count;
	int		i;
	int		res;

	va_start(args, str);
	total_count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			res = handle_format(str[++i], args);
			if (res == -1)
				return (-1);
			total_count += res;
		}
		else
			total_count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (total_count);
}
