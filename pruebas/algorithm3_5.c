/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm3_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:24:04 by becamino          #+#    #+#             */
/*   Updated: 2023/09/19 19:11:03 by becamino         ###   ########.fr       */
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
	if (counter == 4)
	{
		ft_alg4(stack_a, stack_b, counter);
	}
}
t_list	*ft_highestnode(t_list *stack)
{
	t_list		*aux;
	int			size;
	t_list		*higher;
	
	aux = stack;
	size = ft_lstsize(stack);
	printf("highestnode:\n");
	higher = aux;
	while (aux->next != NULL)
	{
		if (aux->order > higher->order)
		{
			higher = aux;
		}
		aux = aux->next;
	}
	printf("higher: %d, %d\n", aux->order, aux->n);
	return (aux);
}

int		smallest_pos(t_list **stack)
{
	t_list	*aux;
	int		smallest_order;
	int		smallest_pos;
	int		i;

	aux = *stack;
	smallest_order = (*stack)->order;
	printf("smallest_order:%d\n", smallest_order);
	printf("aux->order:%d\n", aux->order);
	smallest_pos = 1;
	i = 1;
	while(aux != NULL)
	{
		if(aux->order < smallest_order)
		{
			smallest_order = aux->order;
			smallest_pos = i;
		}
		aux = aux->next;
		i++;
	}
	return (smallest_pos);
}

void	ft_alg4(t_list **stack_a, t_list **stack_b, int counter)
{
		t_list	*last;
		t_list	*aux;
		int		smallest;

		printf("alg_4:\n");
		smallest = smallest_pos(stack_a);
		printf("smallest:%d\n", smallest);
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
		printf("antes del algr:\n");
		printf("stack_a:\n");
		print_list(stack_a);
		printf("stack_b:\n");
		print_list(stack_b);
		ft_alg3(stack_a, 3);
		pa(stack_b, stack_a);
		printf("stack_a:\n");
		print_list(stack_a);
		printf("stack_b:\n");
		print_list(stack_b);
		
}


void	ft_alg3(t_list **stack_a, int count)
{
		t_list	*aux;
		
		aux = *stack_a;
		if (count == 2)
			sa(stack_a);
		else
		{
			aux = ft_highestnode(aux);
			printf("aux:%d\n", aux->n);
			if (*stack_a == aux)
				ra(stack_a);
			else if((*stack_a)->next == aux)
				rra(stack_a);
			if ((*stack_a)->order > (*stack_a)->next->order)
				sa(stack_a);
		}
		printf("Sale alg3.\n");
}
