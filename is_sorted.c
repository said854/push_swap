/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:36:56 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/14 14:49:52 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_list **stack_a, t_list **stack_b , int size)
{
    t_list *temp = *stack_a;
    int count = 0;

    while (temp && temp->next)
    {
        if (temp->num > temp->next->num)
            return (0);
        temp = temp->next;
        count++;
    }
    return (count == size - 1 && ft_lstsize(*stack_b) == 0);
}
