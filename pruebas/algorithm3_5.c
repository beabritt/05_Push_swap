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
		ft_alg_one(stack_a, counter);
	}
}
t_list	*ft_findhigh(t_list *stack, int count)
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

void	ft_alg_one(t_list **stack_a, int count)
{
		t_list	*aux;
		
		aux = *stack_a;
		if (count == 2)
			sa(stack_a);
		else
		{
			aux = ft_findhigh(aux, count);
			printf("aux:%d\n", aux->n);
			rra(stack_a);
		}
			
		
}
