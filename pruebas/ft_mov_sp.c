/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:55:43 by becamino          #+#    #+#             */
/*   Updated: 2023/09/12 19:17:57 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

void    sa(t_list **stack_a)
{
    ft_swap(&stack_a);
}
void    sb(t_list **stack_b)
{
    ft_swap(&stack_b);
}
void    ss(t_list **stack_a, t_list **stack_b)
{
    ft_swap(&stack_a);
    ft_swap(&stack_b);
}
void    pa(t_list **stack_a, t_list **stack_b)
{
    ft_push(&stack_a, &stack_b);
}

void    pb(t_list **stack_a, t_list **stack_b)
{
    ft_push(&stack_b, &stack_a);
}
