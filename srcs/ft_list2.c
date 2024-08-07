/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:12:39 by becamino          #+#    #+#             */
/*   Updated: 2024/08/07 18:42:18 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	freestacks(t_list **stack_a, t_list **stack_b)
{

	ft_lstclear(stack_a);
	if (stack_b != NULL)
		ft_lstclear(stack_b);
}

void	ft_lstdelone(t_list *lst)
{
	if (!lst)
		return ;
	lst->n = '\0';
	free(lst);
	lst = NULL;
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

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
