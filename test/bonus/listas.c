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