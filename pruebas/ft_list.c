/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:38 by becamino          #+#    #+#             */
/*   Updated: 2023/09/05 15:16:40 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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