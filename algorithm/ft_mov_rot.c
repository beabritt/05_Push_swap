/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mov_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:19:50 by becamino          #+#    #+#             */
/*   Updated: 2023/09/25 17:02:10 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list	**stack_a)
{
	if (*stack_a == NULL)
		return ;
	write(1, "ra\n", 3);
	ft_rotate(stack_a);
}

void	rb(t_list **stack_b)
{
	if (*stack_b == NULL)
		return ;
	write(1, "rb\n", 3);
	ft_rotate(stack_b);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL)
		ft_rotate(stack_a);
	if (*stack_b != NULL)
		ft_rotate(stack_b);
	write(1, "rr\n", 4);
}
