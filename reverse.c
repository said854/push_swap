/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:38:22 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/03 18:04:03 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_list **stack_a)
{
    if (*stack_a == NULL || (*stack_a)->next == NULL) 
        return;
    t_list *second_last; 
    t_list *temp;
    
    temp = *stack_a;
    second_last = NULL;
    while (temp->next != NULL)
    {
        second_last = temp;
        temp = temp->next;
    }
    second_last->next = NULL; 
    ft_lstadd_front(stack_a, temp);   
    ft_printf("rra\n");      
}
void rrb(t_list **stack_b)
{
    rra(stack_b);
    ft_printf("rrb\n");      
}
void rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
    ft_printf("rrr\n");      
}