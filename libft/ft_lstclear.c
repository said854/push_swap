/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:31:04 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/15 15:11:11 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void *))
{
	t_list	*temp;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		if ((*lst)->num)
			del(&(*lst)->num);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
