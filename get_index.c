/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:29:47 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/12 15:30:01 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_list **stack, int value) 
{
    int index = 0;
    t_list *temp = *stack;
    while (temp) 
    {
        if (temp->num == value)
            return index;
        temp = temp->next;
        index++;
    }
    return -1;
}