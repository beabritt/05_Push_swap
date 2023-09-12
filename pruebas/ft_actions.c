/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:27:00 by becamino          #+#    #+#             */
/*   Updated: 2023/09/12 13:27:26 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

void    ft_swap(t_list **stack)
{
    t_list  *aux;
    t_list  *kpr;

    aux = *stack;

	kpr = aux->next;
	aux->next = aux->next->next;
	kpr->next = aux;
	*stack = kpr;
}
