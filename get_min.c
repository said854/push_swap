/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:27:38 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/12 15:28:16 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_min(t_list **stack) 
{
    int min = (*stack)->num;
    t_list *temp = (*stack)->next;
    while (temp) 
    {
        if (temp->num < min)
            min = temp->num;
        temp = temp->next;
    }
    return min;
}