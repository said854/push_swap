/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_tree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:23:22 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/12 15:24:42 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_manage_tree(t_list **stack_a)
{
    t_list *head;
    head = *stack_a;

    if (head->num > head->next->num)
        sa(stack_a);

    if (head->next->num > head->next->next->num)
    {
        rra(stack_a);
        if ((*stack_a)->num > (*stack_a)->next->num)
            sa(stack_a);
    }
    else if (head->num > head->next->next->num)
        ra(stack_a);
}