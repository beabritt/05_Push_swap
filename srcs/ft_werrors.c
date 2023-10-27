/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_werrors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:57:37 by becamino          #+#    #+#             */
/*   Updated: 2023/10/27 13:12:17 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_onlyspaces(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		while (argv[i][j] != '\0' && argv[i][j] == ' ')
		{			
			j++;
		}
		if (argv[i][j] == '\0')
			return (-1);
		i++;
	}
	return (0);
}

void	ft_free_end(char **array)
{
	int	x;

	x = 0;
	while (array[x] != NULL)
	{
		free(array[x]);
		array[x] = NULL;
		x++;
	}
	free(array);
	array = NULL;
}

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (1);
}
