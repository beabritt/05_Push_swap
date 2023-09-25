/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_werrors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:57:37 by becamino          #+#    #+#             */
/*   Updated: 2023/09/25 18:49:12 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_werror(char **array)
{
	write(2, "Error\n", 6);
	free(array);
	exit(0);
}

void	ft_werror_list(t_list **stack_a)
{
	write(2, "Error\n", 6);
	ft_lstclear(stack_a);
	exit(0);
}

void	ft_free_end(char **array)
{
	int	x;

	x = 0;
	x = ft_arrlen(array);
	ft_free(array, x);
}
