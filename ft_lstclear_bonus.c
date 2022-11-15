/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:10:52 by melhajja          #+#    #+#             */
/*   Updated: 2022/11/12 08:53:06 by melhajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*del_lst;
	t_list	*tmp_lst;

	if (!(*lst))
		return ;
	if (!del)
		return ;
	tmp_lst = *lst;
	while (tmp_lst)
	{
		del_lst = tmp_lst;
		tmp_lst = tmp_lst->next;
		ft_lstdelone(del_lst, del);
	}
	*lst = 0;
}
