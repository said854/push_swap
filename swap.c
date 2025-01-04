/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:01:49 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/03 18:03:21 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    sa(t_list **stack_a)
{
    int i;

    i = 0;
    ft_swap(&(*stack_a)->num , &(*stack_a)->next->num);
    ft_printf("sa\n");
}
void    sb(t_list **stack_b)
{
   sa(stack_b);
    ft_printf("sb\n");
}
void    ss(t_list **stack_a, t_list **stack_b)
{
   sa(stack_a);
   sb(stack_b);
   ft_printf("ss\n");

}