/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:54 by becamino          #+#    #+#             */
/*   Updated: 2023/09/29 19:21:55 by becamino         ###   ########.fr       */
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
		return (-1);
	else
		return (0);
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
				return (-1);
		}
		i++;
	}
	return (0);
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
				return (-1);
		}
		i++;
	}
	return (0);
}

int	ft_checkdupe(int argc, char **argv)
{
	int	i;
	int	j;
	int	yn;

	i = 0;
	j = 1;
	while (i < argc)
	{
		while (j < argc)
		{
			yn = argv[i] - argv[j];
			if (yn == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

//Check errors. 0 is ok, -1 is error.
int	ft_checkerror(int argc, char **argv)
{
	int	yn;

	yn = ft_checknum(argc, argv);
	if (yn != 0)
		return (yn);
	yn = ft_checkmaxmin(argc, argv);
	if (yn != 0)
		return (yn);
	yn = ft_checkdupe(argc, argv);
	if (yn != 0)
		return (yn);
	return (yn);
}
