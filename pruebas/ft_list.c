#include "pruebaslib.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!lst || !new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{	
		aux = *lst;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
}

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}