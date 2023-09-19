/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:27:00 by becamino          #+#    #+#             */
/*   Updated: 2023/09/19 13:08:24 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

void    ft_swap(t_list **stack)
{
    t_list  *aux;
    t_list  *kpr;

	if (*stack == NULL)
		return;	
    aux = *stack;
	if (aux->next == NULL)
		return;
	kpr = aux->next;
	aux->next = aux->next->next;
	kpr->next = aux;
	*stack = kpr;
}

void	ft_push(t_list **stack1, t_list **stack2)
{
	t_list	*aux;
	t_list	*aux2;
	t_list	*kpr;
	t_list	*kpr2;
	
	aux = *stack1;
	aux2 = *stack2;
	if(*stack1 == NULL)
		return;
	if (*stack2 == NULL)
	{
		kpr = aux->next;
		aux2 = aux;
		aux2->next = NULL;
		aux = kpr;
		*stack1 = aux;
		*stack2 = aux2;
	}
	else
{
	kpr = aux->next;
	kpr2 = aux2;
	aux2 = aux;
	aux2->next = kpr2;
	aux = kpr;
	*stack1 = aux;
	*stack2 = aux2;
	/*kpr = aux->next;
	aux = aux2;
	aux2 = aux;
	aux = kpr;
	*stack1 = aux;
	*stack2 = aux2;*/
		// printf("aux:\n");
		// print_list(&aux);
		// printf("aux2:\n");
		// print_list(&aux2);
}
}
void	ft_rotate(t_list **stack)
{
	t_list	*aux;
	t_list	*kpr;
	t_list	*last;

	aux = *stack;
	if (aux->next == NULL)
		return;
	kpr = aux->next;
	last = ft_lstlast(aux);
	last->next = aux;
	aux->next = NULL;
	aux = kpr;
	*stack = aux;
}
void	ft_revrotate(t_list **stack)
{
	t_list	*aux;
	t_list	*kpr;
	
	aux = *stack;
	if (aux->next == NULL)
		return;
	kpr = ft_lstlast(aux);
	kpr->next = aux;
	aux = kpr;
	while (aux->next->n != kpr->n)
		aux = aux->next;
	aux->next = NULL;
	*stack = kpr;
}