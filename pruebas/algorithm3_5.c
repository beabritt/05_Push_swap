/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm3_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:24:04 by becamino          #+#    #+#             */
/*   Updated: 2023/09/14 17:39:03 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

void	ft_deliver(t_list **stack_a, t_list **stack_b, int counter)
{
	if (counter <= 3)
	{
		*stack_b = NULL;
		ft_alg3(stack_a, counter);
	}
}
t_list	*ft_highestnode(t_list *stack, int count)
{
	t_list	*aux;
	
	aux = stack;
	while (aux->order != count)
	{
		aux = aux->next;
	}
	printf("higher: %d, %d\n", aux->order, aux->n);
	return (aux);
	
}

void	ft_alg3(t_list **stack_a, int count)
{
		t_list	*aux;
		
		aux = *stack_a;
		if (count == 2)
			sa(stack_a);
		else
		{
			aux = ft_highestnode(aux, count);
			printf("aux:%d\n", aux->n);
			if (*stack_a == aux)
				ra(stack_a);
			else if((*stack_a)->next == aux)
				rra(stack_a);
			if ((*stack_a)->order > (*stack_a)->next->order)
				sa(stack_a);
		}
			
		
}
