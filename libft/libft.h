/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:37:58 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/02 22:08:49 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_list
{
	int num;
	struct s_list	*next;
}	t_list;

int	    ft_atoi(char *str);
t_list *ft_lstnew(int num);
t_list *ft_create_list(char **value, int size);
void 	ft_swap(int *a, int *b);
void    ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int     ft_lstsize(t_list *lst);


#endif