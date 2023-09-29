/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:52:07 by becamino          #+#    #+#             */
/*   Updated: 2023/09/29 19:04:15 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_slen(int argc, char **argv)
{
	int	x;
	int	len;

	x = 1;
	len = 0;
	while (x < argc)
	{
		len += ft_strlen(argv[x]) + 1;
		x++;
	}
	return (len);
}

int	ft_arrlen(char **array)
{
	int	x;

	x = 0;
	while (array[x] != NULL)
	{
		x++;
	}
	return (x);
}

void	ft_free_mtx(char **array, int i)
{
	while (i >= 0)
	{
		free (array[i]);
		--i;
	}
	free(array);
}
