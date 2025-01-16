/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 09:48:25 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/15 18:49:23 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int     ft_isdigit(char c)
// {
//         return ((c >= '0' && c <= '9'));
// }

int is_all_space(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            return (0);
        i++;
    }
    return (1);
}

static int	check_valid_arg(char **str)
{
    int i;

    i = 0;
	while (str[i])
    {
        if (is_all_space(str[i]))
            return (1);
        i++;
    }
	return (0);
}
int main(int argc, char **argv)
{
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;

    
    if (argc < 2)
        return (0);
    if (check_valid_arg(argv))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
    stack_a = ft_create_list(argv, argc);
    write(2, "Ok\n", 3);
    sort_all(&stack_a, &stack_b);

    ft_printf("Sorted stack a :\n");
    t_list *temp = stack_a;
    while (temp)
    {
        ft_printf("%d\n", temp->num);
        temp = temp->next;
    }
    ft_printf("Sorted stack b :\n");
    temp = stack_b;
    while (temp)
    {
        ft_printf("%d\n", temp->num);
        temp = temp->next;
    }
    return 0;
}
// 