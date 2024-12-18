/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:54 by becamino          #+#    #+#             */
/*   Updated: 2024/08/22 16:28:53 by becamino         ###   ########.fr       */
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
				write(2, "Error\n", 6);
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
			while (argv[i][j] == '-' || argv[i][j] == '+')
			{
				j++;
				if (argv[i][j] == '-' || argv[i][j] == ' '
					|| argv[i][j] == '+')
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

int	ft_checkmaxmin(char **array)
{
	long	n;
	int		i;

	i = 0;
	while (array[i] != NULL)
	{
		n = ft_atol(array[i]);
		if (n < INT_MIN || n > INT_MAX)
		{
			write (1, "Error\n", 6);
			return (ERROR);
		}
		i++;
	}
	return (NO_ERROR);

}

int	ft_checkerror(int argc, char **argv)
{
	if (ERROR == ft_onlyspaces(argv))
		return (ERROR);
	if (ERROR == ft_checknum(argc, argv))
		return (ERROR);
	return (NO_ERROR);
}
