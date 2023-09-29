/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:05:33 by becamino          #+#    #+#             */
/*   Updated: 2023/09/29 21:14:50 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	ft_tolist(t_list **stack_a, char **array)
{
	size_t	i;
	size_t	x;
	int		n;

	i = 0;
	n = 0;
	x = ft_arrlen(array);
	while (i < x)
	{
		n = ft_atoi(array[i]);
		ft_createnode(stack_a, n);
		i++;
	}
	ft_free_mtx(array, i);
}

char	*ft_toarray2(int argc, char **argv)
{
	int		y;
	int		len;
	char	*s;
	char	*aux;

	y = 1;
	len = ft_slen(argc, argv);
	s = (char *)ft_calloc(len, sizeof(char *));
	if (!s)
		return (0);
	while (y < argc)
	{
		aux = ft_strjoin_ps(s, argv[y]);
		free (s);
		s = aux;
		y++;
	}
	return (s);
}

char	**ft_toarray(int argc, char **argv)
{
	char	**arr;
	char	*s;

	if (!argv)
		return (NULL);
	s = ft_toarray2(argc, argv);
	arr = ft_split(s, ' ');
	free(s);
	return (arr);
}

void	leaks()
{
	system("leaks -q push_swap");
}

int	main(int argc, char *argv[])
{
	int			n;
	char		**array;
	t_list		*stack_a;
	t_list		*stack_b;

	atexit(leaks);
	if (argc < 2)
		return (0);
	array = NULL;
	stack_a = NULL;
	stack_b = NULL;
	n = ft_checkerror(argc, argv);
	if (n != 0)
		ft_werror();
	array = ft_toarray(argc, argv);
	ft_tolist(&stack_a, array);
	n = ft_checkorder(&stack_a);
	if (n != 0)
		ft_free_end(array);
	ft_deliver(&stack_a, &stack_b);
	freestacks(&stack_a, &stack_b);
	return (0);
}