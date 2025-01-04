/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:37:09 by sjoukni           #+#    #+#             */
/*   Updated: 2024/12/29 15:22:13 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(int num)
{
    t_list *new_node;
    
    new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node == NULL)
        return (NULL);
    new_node->num = num;
    new_node->next = NULL;
    return (new_node);  
}