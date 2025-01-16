/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:38:17 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/14 18:37:08 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_reverse(t_list **stack_a, int *sorted_arr, int i, int r)
{
    t_list *tmp;
    int j = 0;
    int size;
    
    size = ft_lstsize(*stack_a);
    tmp = *stack_a;
    while (tmp && !(tmp->num >= sorted_arr[i] && tmp->num <= sorted_arr[r + i]))
    {
        tmp = tmp->next;
        j++;
    }
    if (j > ft_lstsize(*stack_a) / 2)
        return 1;
    return 0;
}