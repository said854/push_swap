/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:35:39 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/12 15:35:51 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_range(t_list **stack_a)
{
    int size;
    
    size = ft_lstsize(*stack_a);
    if(size <= 16)
        return(3);
    if (size <= 100)
        return(13);
    if (size <= 500)
        return(30);
    if (size > 500)
        return(45); 
    return (0);   
}