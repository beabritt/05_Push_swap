/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mov_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:20:56 by becamino          #+#    #+#             */
/*   Updated: 2024/08/07 17:03:45 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_list **stack_a)
{
	write(1, "rra\n", 4);
	ft_revrotate(stack_a);
}

void	rrb(t_list **stack_b)
{
	write(1, "rrb\n", 4);
	ft_revrotate(stack_b);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL)
		ft_revrotate(stack_a);
	if (*stack_b != NULL)
		ft_revrotate(stack_b);
	write(1, "rrr\n", 4);
}
