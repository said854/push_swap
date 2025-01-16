/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:17:46 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/15 16:12:25 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void free_sorted_array(int *sorted_arr)
{
    if (sorted_arr)
        free(sorted_arr);
}

void free_stacks(t_list **stack_a, t_list **stack_b)
{
    if (stack_a && *stack_a)
    {
        ft_lstclear(stack_a, free);
        *stack_a = NULL;
    }
    if (stack_b && *stack_b)
    {
        ft_lstclear(stack_b, free);
        *stack_b = NULL; 
    }
}


void handle_chunk(t_list **stack_a, t_list **stack_b, int *i)
{
    int size;

    pb(stack_a, stack_b);
    if (ft_lstsize(*stack_b) >= 2 && (*stack_b)->num < (*stack_b)->next->num)
    {
        size = ft_lstsize(*stack_b);
        if (size >= 2)
            sb(stack_b);
    }
    (*i)++;
}

void handle_low(t_list **stack_a, t_list **stack_b, int *i)
{
    pb(stack_a, stack_b);
    if ((*stack_b)->next)
        rb(stack_b);
    (*i)++;
}

void sort_stack_a(t_list **stack_a, t_list **stack_b)
{
    int r;
    int size;
    int i;
    int *sorted_arr;

    size = ft_lstsize(*stack_a);
    sorted_arr = create_sorted_array(*stack_a, size);
    if (!sorted_arr)
    {
        free_stacks(stack_a, stack_b);
        return;
    }
    r = get_range(stack_a);
    i = 0;
    while (*stack_a)
    {
        if (r + i >= size)
            r = size - i - 1;
        if ((*stack_a)->num >= sorted_arr[i] && (*stack_a)->num <= sorted_arr[r + i])
            handle_chunk(stack_a, stack_b, &i);
        else if ((*stack_a)->num < sorted_arr[i])
            handle_low(stack_a, stack_b, &i);
        else if (check_reverse(stack_a, sorted_arr, i, r))
            rra(stack_a);
        else
            ra(stack_a);
    }
    free_sorted_array(sorted_arr); 
}

void push_back_to_a(t_list **stack_a, t_list **stack_b)
{
    while (*stack_b)
    {
        int max;
        int index;

        max = get_max(stack_b);
        index = get_index(stack_b, max);
        rotate_to_top(stack_b, index);
        pa(stack_a, stack_b);
    }
}

void sort_all(t_list **stack_a, t_list **stack_b)
{
    int size = ft_lstsize(*stack_a);
    while (!is_sorted(stack_a, stack_b, size))
    {
        if (size == 2)
            sa(stack_a);
        else if (size == 3)
            ft_manage_tree(stack_a);
        else if (size == 4 || size == 5)
            ft_manage_five(stack_a, stack_b, size);
        else
        {
            sort_stack_a(stack_a, stack_b);
            push_back_to_a(stack_a, stack_b);
        }
    }
    // free_stacks(stack_a, stack_b);
}
