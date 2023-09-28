/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:27:00 by becamino          #+#    #+#             */
/*   Updated: 2023/09/28 18:55:53 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//Deliver the stacks to the correct algorithm.
void	ft_deliver(t_list **stack_a, t_list **stack_b)
{
	int	counter;

	counter = ft_lstsize(*stack_a);
	if (counter <= 3)
	{
		*stack_b = NULL;
		ft_alg3(stack_a, counter);
	}
	else if (counter <= 5)
		ft_alg5(stack_a, stack_b, counter);
	else if (counter <= 100)
		ft_alg100(stack_a, stack_b, counter);
	else
		ft_alg500(stack_a, stack_b, counter);
}

void	ft_swap(t_list **stack)
{
	t_list	*aux;
	t_list	*kpr;

	if (*stack == NULL)
		return ;
	aux = *stack;
	if (aux->next == NULL)
		return ;
	kpr = aux->next;
	aux->next = aux->next->next;
	kpr->next = aux;
	*stack = kpr;
}

void	ft_push(t_list **stack1, t_list **stack2)
{
	t_list	*kpr;
	t_list	*kpr2;

	if (*stack1 == NULL)
		return ;
	if (*stack2 == NULL)
	{
		kpr = (*stack1)->next;
		(*stack2) = (*stack1);
		(*stack2)->next = NULL;
		(*stack1) = kpr;
	}
	else
	{
		kpr = (*stack1)->next;
		kpr2 = (*stack2);
		(*stack2) = (*stack1);
		(*stack2)->next = kpr2;
		(*stack1) = kpr;
	}
}

void	ft_rotate(t_list **stack)
{
	t_list	*aux;
	t_list	*kpr;
	t_list	*last;

	aux = *stack;
	if (aux->next == NULL)
		return ;
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
		return ;
	kpr = ft_lstlast(aux);
	kpr->next = aux;
	aux = kpr;
	while (aux->next->n != kpr->n)
		aux = aux->next;
	aux->next = NULL;
	*stack = kpr;
}
