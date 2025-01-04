/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:51:18 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/03 18:04:42 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void ra(t_list **stack_a)
{
    if (*stack_a == NULL)
        return;
    t_list *temp;
    temp = *stack_a; 
    *stack_a = (*stack_a)->next;
    ft_lstadd_back(stack_a, temp);
    temp->next = NULL;
    ft_printf("ra\n");      
}
void rb(t_list **stack_b)
{
    if (*stack_b == NULL)
        return;
    t_list *temp;
    temp = *stack_b; 
    *stack_b = (*stack_b)->next;
    ft_lstadd_back(stack_b, temp);
    temp->next = NULL;
    ft_printf("rb\n");      
}

void rr(t_list **stack_a, t_list **stack_b)
{
    ra(stack_a);
    rb(stack_b);
    ft_printf("rr\n");      
}