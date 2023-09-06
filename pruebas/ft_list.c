/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:38 by becamino          #+#    #+#             */
/*   Updated: 2023/09/06 12:59:55 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	new = (int *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->order = 1;
	new->next = NULL;
	return (new);
}

