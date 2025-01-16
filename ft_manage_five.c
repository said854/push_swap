/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:26:29 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/14 18:47:47 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_manage_five(t_list **stack_a , t_list **stack_b, int size)
{
   int i ;
   int min ;
   int j;
   j = 0;
    while (j < size - 3)
    {
        min = get_min(stack_a);
        i = get_index(stack_a, min);
        rotate_to_top(stack_a, i);
        pb(stack_a, stack_b);
        j++;
    }
    ft_manage_tree(stack_a);
    pa(stack_a , stack_b);
    pa(stack_a , stack_b); 
}
