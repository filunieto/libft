/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:54:32 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/08 15:19:12 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstleng(t_list *lst);
/*  
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest; //es un puntero o un puntero de punteros? * ó **?
	t_list *tmp;

	tmp = lst;
	dest = malloc(sizeof(t_list *) * ft_lstleng(lst));
	if (!lst || !f || dest || del)
		return (NULL);
	while (tmp) 
	{
		dest->content = (*f)(tmp->content);
		dest = dest->next;
		tmp = tmp->next;
		del(lst->content);
		lst->next = NULL; //no sé si es necesario
		free(lst);
		lst = tmp->next; 
	}
	return (dest);
}

int ft_lstleng(t_list *lst)
{
	int	leng_lst;

	leng_lst = 0;
	if(!lst)
		return (0);
	while (lst)
	{
		leng_lst++;
		lst = lst->next;
	}
	return (leng_lst);
}
