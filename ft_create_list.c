/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:03:54 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/02 22:49:36 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"


t_list  *ft_create_list(char **value, int size)
{
    t_list *head = NULL;
    t_list *new_node = NULL;
    t_list *temp = NULL;
    // t_list *last_node = NULL;
    int i;
    
    i = 1;
    head = ft_lstnew(ft_atoi(value[i++]));
    temp = head;

    while (i < size)
    {
        new_node = ft_lstnew(ft_atoi(value[i++]));
        if (new_node == NULL)
            return (NULL);
        temp->next = new_node;
        temp = new_node;
    }
    // last_node = ft_lstlast(head);
    // last_node->next = head;
    return (head);
}