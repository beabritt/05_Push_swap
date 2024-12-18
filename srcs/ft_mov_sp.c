/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mov_sp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:55:43 by becamino          #+#    #+#             */
/*   Updated: 2024/08/07 17:03:45 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_list **stack_a)
{
	write(1, "sa\n", 3);
	ft_swap(stack_a);
}

void	sb(t_list **stack_b)
{
	write(1, "sb\n", 3);
	ft_swap(stack_b);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	write(1, "ss\n", 3);
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	write(1, "pa\n", 3);
	ft_push(stack_b, stack_a);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	write(1, "pb\n", 3);
	ft_push(stack_a, stack_b);
}
