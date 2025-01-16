/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:03:54 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/15 18:12:26 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*append_arg(char *arg, const char *value)
{
	char	*temp;

	temp = ft_strjoin(arg, value);
	free(arg);
	return (temp);
}
int     ft_isdigit(char c)
{
        return ((c >= '0' && c <= '9'));
}

int	check_is_num(char **str)
{
	int i;
	int j;
	
	j = 0;
	while (str[j])
	{
		i = 0;
		while(str[j][i])
		{
			if (((str[j][i] == '+' || str[j][i] == '-') && !(ft_isdigit(str[j][i + 1]))) || (str[j][i] != ' ' && !(str[j][i] == '+' || str[j][i] == '-') && !(ft_isdigit(str[j][i]))))
				return (0);
			i++;
		}
		j++;
		
	}
	return (1);
}
char	*join_arg(char **value, int size)
{
	char	*arg;
	int		i;

	arg = strdup("");
	i = 1;
	while (i < size)
	{
		arg = append_arg(arg, value[i]);
		if (i < size - 1)
			arg = append_arg(arg, " ");
		i++;
	}
	return (arg);
}

void	add_node_to_list(t_list **head, t_list **temp, int value)
{
	t_list	*new_node;

	new_node = ft_lstnew(value);
	if (!new_node)
		return ;
	if (!*head)
		*head = new_node;
	else
		(*temp)->next = new_node;
	*temp = new_node;
}

t_list	*ft_create_list(char **value, int size)
{
	t_list	*head;
	t_list	*temp;
	char	*arg;
	char	**split_values;
	int		j;

	head = NULL;
	temp = NULL;
	arg = join_arg(value, size);
	split_values = ft_split(arg, ' ');
	if (!split_values[0])
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (!check_is_num(split_values))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	free(arg);
	j = 0;
	while (split_values[j])
	{
		add_node_to_list(&head, &temp, ft_atoi(split_values[j]));
		j++;
	}
	return (head);
}
