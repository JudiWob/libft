/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:49:56 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/27 12:34:42 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (new)
		{
			new->next = *lst;
			*lst = new;
		}
	}
}

//lst : checks if the list is stored at a valid memory location 
//== if the list exists
//new: checks if new is stored at a valid memory location 
//== if the the node exists 
//https://www.naukri.com/code360/library/how-to-write-the-functions-
//that-modify-the-head-pointer-of-a-linked-list-in-c