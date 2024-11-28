/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:45:49 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/28 16:08:33 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	tmp->next = NULL;
	return (new);
}


// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*head;
// 	t_list	*new;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	head = NULL;
// 	while (lst)
// 	{
// 		new = ft_lstnew((*f)(lst->content));
// 		if (!new)
// 		{
// 			while (head)
// 			{
// 				new = head->next;
// 				(*del)(head->content);
// 				free(head);
// 				head = new;
// 			}
// 			lst = NULL;
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&head, new);
// 		lst = lst->next;
// 	}
// 	return (head);
// }
// https://github.com/rchallie/libft/blob/master/ft_lstmap.c
// https://github.com/Glagan/42-libft/blob/master/ft_lstmap.c