
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;

} t_list;  //t_list sera el sinonimo  de struct s_list

/* crear lista 
declaramos nodo y reservamos memoria 
pasamos el valor cualquiera al nodo  , y next -> NULL (primer y último elemento de la lista)
igualamos el puntero List (hasta ahora una lista vacia) a N
*/

//Contar longitud de una lista:

int	ft_lstsize(t_list *lst)//Mi version :

{
	int len;

	len = 0;
	while (lst->next)
	{
		len++;
		lst->next = lst->next->next;
	}
	return (len);
}

t_list	*ft_lstlast(t_list *lst) //mi version. compararlo con la otra a ver quçe tal funciona
{
	int	n;

	n = ft_lstsize(lst);
	if (!lst)
		return (NULL);
	while (n - 1 > 0)
	{
		lst = lst->next;
		n--;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	if(!new)
		return ;
	while((*lst)->next)
	{
		*lst = (*lst)->next;
	}
	(*lst)->next = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}