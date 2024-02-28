/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:24:30 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/03 10:24:35 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_lst;
	t_list	*new_node;

	current = lst;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (current != NULL)
	{
		new_node = ft_lstnew((*f)(current->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_lst, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		current = current->next;
	}
	return (new_lst);
}
