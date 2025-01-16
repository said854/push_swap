/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:30:55 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/14 16:07:53 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_to_top(t_list **stack, int index) 
{
    int size = ft_lstsize(*stack);
    if (index <= size / 2) 
    {
        while (index-- > 0)
            rb(stack);
    } else
    {
        index = size - index;
        while (index-- > 0)
            rrb(stack);
    }
}
