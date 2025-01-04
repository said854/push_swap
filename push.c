/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:29:45 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/03 18:15:40 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_list **stack_a, t_list **stack_b)
{
    if (*stack_b == NULL)
        return;
    t_list *temp;
    temp = *stack_b; 
    *stack_b = (*stack_b)->next;
    ft_lstadd_front(stack_a, temp);
    ft_printf("pa\n");
}
void pb(t_list **stack_a, t_list **stack_b)
{
    if (*stack_a == NULL)
        return;
    t_list *temp;
    temp = *stack_a; 
    *stack_a = (*stack_a)->next;
    ft_lstadd_front(stack_b, temp);
    ft_printf("pb\n");
}