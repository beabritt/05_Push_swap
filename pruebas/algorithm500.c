/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:50:59 by becamino          #+#    #+#             */
/*   Updated: 2023/09/23 19:56:31 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"


void	ft_push_rev_a(t_list **stack_a, t_list **stack_b, int highest_order)
{
	while((*stack_b)->order != highest_order)
	{
		rrb (stack_b);
	}
	pa(stack_b, stack_a);
	
}
void	ft_push_a(t_list **stack_a, t_list **stack_b, int highest_order)
{
	while((*stack_b)->order != highest_order)
	{
		rb (stack_b);
	}
	pa(stack_b, stack_a);
}

void    ft_alg500(t_list **stack_a, t_list **stack_b, int counter)
{
	int		chunk;
	int		bigger_order;
	int		highest_order;
	int		highest_pos;
	
	
	chunk = counter / 20;
	bigger_order = chunk;
	while (ft_lstsize(*stack_a) > 0)
	{
		ft_push_b(stack_a, stack_b, counter, bigger_order);
		bigger_order +=chunk;
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