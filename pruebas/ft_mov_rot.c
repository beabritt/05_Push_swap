/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mov_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:19:50 by becamino          #+#    #+#             */
/*   Updated: 2023/09/12 19:20:41 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

void	ra (t_list	**stack_a)
{
	if (*stack_a == NULL)
		return;
	ft_rotate(stack_a);
}

void	rb (t_list **stack_b)
{
	if (*stack_b == NULL)
		return;	
	ft_rotate(stack_b);
}

void	rr (t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL)
		ft_rotate(stack_a);
	if (*stack_b != NULL)
		ft_rotate(stack_b);
	else
		return;
}
