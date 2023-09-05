#include "pruebaslib.h"

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
	new->next = NULL;
	return (new);
}

t_list	*ft_tolist(t_list *start, char **array)
{
	size_t	i;
	size_t	x;
	int		n;
	t_list	*node;
	
	i = 0;
	n = 0;
	x = ft_arrlen(array);
	while (i < x)
	{
		n = ft_atoi(array[i]);
		node = ft_lstnew(n);
		start = ft_lstlast(&start);
		ft_lstadd_back(&start, node);
		i++;
	}
	return (start);
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
	a = lstnew(x);
	printf("%d\n", *(int *)a->content);
	return (0); 
}