/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:38 by becamino          #+#    #+#             */
/*   Updated: 2024/08/07 17:03:45 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstadd_back(t_list **stack_a, t_list *node)
{
	t_list	*aux;

	if (!*stack_a)
		*stack_a = node;
	else
	{
		aux = *stack_a;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = node;
	}
}

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->n = content;
	new->order = 1;
	new->next = NULL;
	return (new);
}

void	ft_createnode(t_list **stack_a, int n)
{
	t_list	*node;
	t_list	*aux;

	node = ft_lstnew(n);
	ft_lstadd_back(stack_a, node);
	aux = *stack_a;
	while (aux->next != NULL)
	{
		if (aux->n < node->n)
			node->order++;
		if (aux->n > node->n)
			aux->order++;
		aux = aux->next;
	}
	aux = *stack_a;
}
