/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sorted_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:34:03 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/15 14:59:38 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void	check_for_duplicates(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				free(arr);
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

static void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

int	*create_sorted_array(t_list *stack, int size)
{
	int		*arr;
	t_list	*temp;
	int		i;

	arr = malloc(sizeof(int) * size);
	if (!arr)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	temp = stack;
	i = 0;
	while (i < size)
	{
		arr[i] = temp->num;
		temp = temp->next;
		i++;
	}
	check_for_duplicates(arr, size);
	sort_array(arr, size);
	return (arr);
}

