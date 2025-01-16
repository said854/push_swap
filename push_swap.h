/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:27:15 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/14 18:37:30 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

void    sa(t_list **stack_a);
void    sb(t_list **stack_b);
void    ss(t_list **stack_a, t_list **stack_b);
void pa(t_list **stack_a, t_list **stack_b);
void pa(t_list **stack_a, t_list **stack_b);
void pb(t_list **stack_a, t_list **stack_b);
void ra(t_list **stack_a);
void rb(t_list **stack_b);
void rr(t_list **stack_a, t_list **stack_b);
void rra(t_list **stack_a);
void rrb(t_list **stack_b);
void rrr(t_list **stack_a, t_list **stack_b);
void ft_manage_tree(t_list **stack_a);
void ft_manage_five(t_list **stack_a, t_list **stack_b, int size);
void rotate_to_top(t_list **stack, int index);
void sort_all(t_list **stack_a , t_list **stack_b);
int get_min(t_list **stack);
int get_max(t_list **stack);
int get_index(t_list **stack, int value);
int *create_sorted_array(t_list *stack, int size);
int get_range(t_list **stack_a);
int is_sorted(t_list **stack_a, t_list **stack_b , int size);
char	*ft_strjoin(char const *s1, char const *s2);
int check_reverse(t_list **stack_a, int *sorted_arr, int i, int r);



#endif