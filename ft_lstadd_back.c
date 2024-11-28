/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:35:29 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/28 15:15:41 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (lst && new)
	{
		if (*lst)
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
		else
			*lst = new;
	}
}

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	if (lst && new)
// 	{
// 		if (*lst)
// 		{
// 			while ((*lst)->next)
// 			{
// 				(*lst) = (*lst)->next;
// 			}
// 			(*lst)->next = new;
// 			new->next = NULL;
// 			return ;
// 		}
// 		*lst = new;
// 	}
// }
// lst: checks if the list is stored at a valid memory location
//== if the list exists
// new: checks if new is stored at a valid memory location
//== if the node exists
// checks wheter *lst hold valid memory location == node(s) exist