/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:24:04 by becamino          #+#    #+#             */
/*   Updated: 2023/09/29 21:02:43 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_calculate_fastest(int f_pos, int s_pos, int counter)
{
	int	middle;

	middle = counter / 2;
	if (f_pos <= middle)
		f_pos = middle - f_pos;
	else
		f_pos = counter - f_pos;
	if (s_pos <= middle)
		s_pos = middle - s_pos;
	else
		s_pos = counter - s_pos;
	if (f_pos < s_pos)
		return (f_pos);
	else
		return (s_pos);
}

//Finds the highest order of the stack.
int	ft_highestorder(t_list **stack)
{
	t_list		*aux;
	int			higher;

	aux = *stack;
	higher = aux->order;
	while (aux != NULL)
	{
		if (aux->order > higher)
		{
			higher = aux->order;
		}
		aux = aux->next;
	}
	return (higher);
}

void	ft_alg3(t_list **stack_a, int count)
{
	t_list	*aux;
	int		highest;

	aux = *stack_a;
	if (count == 2)
		sa(stack_a);
	else
	{
		highest = ft_highestorder(stack_a);
		if ((*stack_a)->order == highest)
			ra(stack_a);
		else if ((*stack_a)->next->order == highest)
			rra(stack_a);
		if ((*stack_a)->order > (*stack_a)->next->order)
			sa(stack_a);
	}
}
