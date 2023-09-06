#include "pruebaslib.h"

void	ft_lstdelone(t_list *lst)
{
	if (!lst)
		return ;
	lst->content = '\0';
	free(lst);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*aux;

	if (!*lst)
		return ;
	aux = *lst;
	while (aux != NULL)
	{
		aux = aux->next;
		ft_lstdelone(*lst);
		*lst = aux;
	}
	*lst = NULL;
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}

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
	new->order = 1;
	new->next = NULL;
	return (new);
}


/*int main (int argc, char **argv)
{
    size_t 	x;
	char 	**array;
	t_list	*stack_a;
	size_t	i;

	i = 0;
	x = ft_arrlen(array);
    array = ft_split("55 56 57", ' ');
	stack_a = ft_tolist(stack_a, array);
	while (i < x)
	{
		printf("%d\n", *(int *)stack_a->content);
	}
	printf("%d\n", );
	ft_free(array, (int *)x);
    return (0);
}*/

int	main (void)
{
	t_list	*a;
	int		x;

	x = 5;
	a = ft_lstnew(x);
	printf("%d\n", a->content);
	printf("%d\n", a->order);
	ft_lstclear(&a);
	return (0); 
}