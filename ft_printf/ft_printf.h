/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:35:01 by sjoukni           #+#    #+#             */
/*   Updated: 2024/11/26 14:56:48 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_puthexa(unsigned int nbr);
int	ft_puthexa_upper(unsigned int nbr);
int	ft_putunsigned_int(unsigned int n);
int	ft_putadress(unsigned long long ptr);

#endif
