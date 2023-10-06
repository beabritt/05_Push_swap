/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:07:59 by becamino          #+#    #+#             */
/*   Updated: 2023/10/06 19:10:47 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list **stack)
{
	t_list	*aux;

	if (*stack == NULL)
	{
		printf("(vacio)\n");
		return ;
	}
	aux = *stack;
	while (aux->next != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
	printf("%d\n", aux->n);
}
