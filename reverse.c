/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:38:22 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/14 15:43:01 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate(t_list **stack)
{
    if (*stack == NULL || (*stack)->next == NULL) 
        return;
    t_list *second_last; 
    t_list *temp;
    
    temp = *stack;
    second_last = NULL;
    while (temp->next != NULL)
    {
        second_last = temp;
        temp = temp->next;
    }
    second_last->next = NULL; 
    ft_lstadd_front(stack, temp);
}


void rra(t_list **stack_a)
{
    reverse_rotate(stack_a);
    ft_printf("rra\n");      
}
void rrb(t_list **stack_b)
{
    reverse_rotate(stack_b);
    ft_printf("rrb\n");      
}
void rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
    ft_printf("rrr\n");      
}