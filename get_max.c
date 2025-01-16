/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:28:51 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/12 15:29:25 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max(t_list **stack) 
{
    int max = (*stack)->num;
    t_list *temp = (*stack)->next;
    while (temp) 
    {
        if (temp->num > max)
            max = temp->num;
        temp = temp->next;
    }
    return max;
}