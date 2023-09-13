/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mov_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:20:56 by becamino          #+#    #+#             */
/*   Updated: 2023/09/12 19:21:31 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

void	rra (t_list **stack_a)
{
	ft_rotate(stack_a);
}

void	rrb (t_list **stack_b)
{
	ft_rotate(stack_b);
}

void	rrr (t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL)
		ft_revrotate(stack_a);
	if (*stack_b != NULL)
		ft_revrotate(stack_b);
	else
		return;
}