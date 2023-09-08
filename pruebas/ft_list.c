/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:38 by becamino          #+#    #+#             */
/*   Updated: 2023/09/08 12:26:25 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

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
		t_list	*prueba;
	
		node = ft_lstnew(n);
		ft_lstadd_back(stack_a, node);
		printf("%d\n", node->n);
		printf("%d\n", node->order);
		aux = *stack_a;
		while(aux->next != NULL)
		{
			if(aux->n < node->n)
				node->order++;
			if(aux->n > node->n)
				aux->order++;
			aux = aux->next;
		}
		prueba = *stack_a;
		printf("%d\n", prueba->n);
		printf("%d\n", prueba->order);
		printf("sale\n");
}