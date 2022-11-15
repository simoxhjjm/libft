/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:42:46 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/10 15:36:50 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*savenode;
	t_list	*tmpnode;
	t_list	*newlist;

	savenode = lst;
	newlist = NULL;
	while (savenode != NULL)
	{
		tmpnode = ft_lstnew(f(savenode->content));
		if (tmpnode == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, tmpnode);
		savenode = savenode->next;
	}
	return (newlist);
}
