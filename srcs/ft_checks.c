/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:54 by becamino          #+#    #+#             */
/*   Updated: 2023/10/27 13:14:27 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//Checks if every arg is clear of the rest of chars. 
int	ft_checkorder(t_list **stack_a)
{
	t_list	*aux;

	aux = *stack_a;
	while (aux->next != NULL && aux->n < aux->next->n)
	{
		aux = aux->next;
	}
	if (aux->next == NULL)
		return (ORDERED);
	else
		return (NOT_ORDERED);
}

int	ft_checkdupes(t_list **stack_a)
{
	t_list	*aux;
	t_list	*aux2;

	aux = *stack_a;
	while (aux->next != NULL)
	{
		aux2 = aux->next;
		while (aux2 != NULL)
		{
			if (aux->n == aux2->n)
			{	
				write(1, "Error\n", 6);
				return (ERROR);
			}
			aux2 = aux2->next;
		}
		aux = aux->next;
	}
	return (NO_ERROR);
}

int	ft_checknum(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{	
			while (argv[i][j] == '-')
			{
				j++;
				if (argv[i][j] == '-' || argv[i][j] == ' ')
					return (-1);
			}
			if (argv[i][j] == ' ' || argv[i][j] == '-'
				|| (argv[i][j] >= '0' && argv[i][j] <= '9'))
				j++;
			else
				return (ERROR);
		}
		i++;
	}
	return (NO_ERROR);
}

int	ft_checkmaxmin(int argc, char **argv)
{
	int	i;
	int	minus;

	i = 1;
	while (i < argc)
	{
		minus = ft_strchr_ps(argv[i], '-');
		if (minus == 0)
		{
			minus = ft_atoi(argv[i]);
			if (minus < 0)
				return (-1);
		}
		else
		{
			minus = ft_atoi(argv[i]);
			if (minus > 0)
				return (ERROR);
		}
		i++;
	}
	return (NO_ERROR);
}

//Check errors. 0 is ok, -1 is error.
int	ft_checkerror(int argc, char **argv)
{
	if (ERROR == ft_onlyspaces(argv))
		return (ERROR);
	if (ERROR == ft_checknum(argc, argv))
		return (ERROR);
	if (ERROR == ft_checkmaxmin(argc, argv))
		return (ERROR);
	return (NO_ERROR);
}
