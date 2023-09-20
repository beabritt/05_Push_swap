/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:24:04 by becamino          #+#    #+#             */
/*   Updated: 2023/09/20 19:50:19 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"


t_list	*ft_highestnode(t_list *stack)
{
	t_list		*aux;
	int			size;
	t_list		*higher;
	
	aux = stack;
	size = ft_lstsize(stack);
	higher = aux;
	while (aux->next != NULL)
	{
		if (aux->order > higher->order)
		{
			higher = aux;
		}
		aux = aux->next;
	}
	return (aux);
}





/*void	ft_alg4(t_list **stack_a, t_list **stack_b, int counter)
{
		t_list	*last;
		t_list	*aux;
		int		smallest;

		smallest = smallest_pos(stack_a);
		aux = *stack_a;
		if (smallest <= counter / 2)
		{
			if (aux->order == 1)
				pb(stack_a, stack_b);
			else if (aux->next->order == 1)
			{	
				sa(stack_a);
				pb(stack_a, stack_b);
			}	
		}
		else
		{
			last = ft_lstlast(*stack_a);
			if(last->order == 1)
			{
				rra(stack_a);
				pb(stack_a, stack_b);
			}
			else
				rra(stack_a);
				rra(stack_a);
				pb(stack_a, stack_b);
		}	
}*/


void	ft_alg3(t_list **stack_a, int count)
{
		t_list	*aux;
		
		aux = *stack_a;
		if (count == 2)
			sa(stack_a);
		else
		{
			aux = ft_highestnode(aux);
			if (*stack_a == aux)
				ra(stack_a);
			else if((*stack_a)->next == aux)
				rra(stack_a);
			if ((*stack_a)->order > (*stack_a)->next->order)
				sa(stack_a);
		}
}
