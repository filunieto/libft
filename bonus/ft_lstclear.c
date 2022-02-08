/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:59:03 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/08 02:49:29 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	if (!((*lst)->next))
	{
		del((*lst)->content);
		free((*lst));
	}
	while ((*lst)->next)
	{
		tmp = (*lst);
		(*lst) = (*lst)->next;
		del(tmp->content);
		free(tmp);
	}
}
