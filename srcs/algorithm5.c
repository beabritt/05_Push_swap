/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:18:07 by becamino          #+#    #+#             */
/*   Updated: 2024/08/07 17:03:45 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//Finds the smallest order in stack_a.
int	ft_smallest_order(t_list **stack)
{
	t_list	*aux;
	int		smallest_order;

	aux = *stack;
	smallest_order = aux->order;
	while (aux != NULL)
	{
		if (aux->order < smallest_order)
		{
			smallest_order = aux->order;
		}
		aux = aux->next;
	}
	return (smallest_order);
}

//Finds the numeric position of the smallest number to compare with the middle.
int	ft_smallest_pos(t_list **stack)
{
	t_list	*aux;
	int		smallest_order;
	int		smallest_pos;
	int		i;

	aux = *stack;
	smallest_order = (*stack)->order;
	smallest_pos = 1;
	i = 1;
	while (aux != NULL)
	{
		if (aux->order < smallest_order)
		{
			smallest_order = aux->order;
			smallest_pos = i;
		}
		aux = aux->next;
		i++;
	}
	return (smallest_pos);
}

//Makes push of the smallest number if its position is up the middle.
void	ft_pushfirst5(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;
	int		smallest_order;

	smallest_order = ft_smallest_order(stack_a);
	aux = *stack_a;
	while (aux->order != smallest_order)
	{
		aux = aux->next;
	}
	while ((*stack_a)->order != smallest_order)
		ra(stack_a);
	pb(stack_a, stack_b);
}

//Makes push of the smallest number if its position is under the middle.
void	ft_pushlast5(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;
	int		smallest_order;

	smallest_order = ft_smallest_order(stack_a);
	aux = *stack_a;
	while (aux->order != smallest_order)
	{
		aux = aux->next;
	}
	while ((*stack_a)->order != smallest_order)
		rra(stack_a);
	pb(stack_a, stack_b);
}

//Main function of 5_algorithm.
void	ft_alg5(t_list **stack_a, t_list **stack_b, int counter)
{
	int	smallest_p;
	int	i;

	i = 3;
	while (i < counter)
	{
		smallest_p = ft_smallest_pos(stack_a);
		if (smallest_p < counter / 2)
		{
			ft_pushfirst5(stack_a, stack_b);
		}
		else
		{
			ft_pushlast5(stack_a, stack_b);
		}
		i++;
	}
	ft_alg3(stack_a, counter);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
