/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:52:07 by becamino          #+#    #+#             */
/*   Updated: 2024/08/07 17:03:45 by becamino         ###   ########.fr       */
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
