/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:19:34 by becamino          #+#    #+#             */
/*   Updated: 2023/09/28 12:25:32 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_highest_pos(t_list **stack)
{
	t_list	*aux;
	int		highest_order;
	int		highest_pos;
	int		i;

	aux = *stack;
	highest_order = (*stack)->order;
	highest_pos = ft_lstsize(aux);
	i = 1;
	while (aux != NULL)
	{
		if (aux->order > highest_order)
		{
			highest_order = aux->order;
			highest_pos = i;
		}
		aux = aux->next;
		i++;
	}
	return (highest_pos);
}

int	ft_counter_bign(t_list **stack_a, int bigger_order)
{
	t_list	*aux;
	int		count;

	aux = *stack_a;
	count = 0;
	while (aux)
	{
		if (aux->order <= bigger_order)
			count++;
		aux = aux->next;
	}
	return (count);
}

void	ft_push_b(t_list **stack_a, t_list **stack_b, int stack_len,
		int big_order)
{
	int		count;
	int		i;
	int		next;

	i = 0;
	count = ft_counter_bign(stack_a, big_order);
	while (i < count)
	{
		if ((*stack_a)->order <= big_order)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
		{
			next = ft_smallest_pos(stack_a);
			if (next < stack_len / 2)
				ra(stack_a);
			else
				rra(stack_a);
		}
	}
}

void	ft_alg100(t_list **stack_a, t_list **stack_b, int counter)
{
	int		chunk;
	int		bigger_order;
	int		highest_order;
	int		highest_pos;

	chunk = counter / 4;
	bigger_order = chunk;
	while (ft_lstsize(*stack_a) > 0)
	{
		ft_push_b(stack_a, stack_b, counter, bigger_order);
		bigger_order += chunk;
	}
	while (ft_lstsize(*stack_b) > 0)
	{
		highest_order = ft_highestorder(stack_b);
		highest_pos = ft_highest_pos(stack_b);
		if (highest_pos < counter / 2)
			ft_push_a(stack_a, stack_b, highest_order);
		else
			ft_push_rev_a(stack_a, stack_b, highest_order);
	}
}
