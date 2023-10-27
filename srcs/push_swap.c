/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:05:33 by becamino          #+#    #+#             */
/*   Updated: 2023/10/27 12:34:36 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	leaks(void)
{
	system("leaks -q push_swap");
}

int	main(int argc, char *argv[])
{
	char		**array;
	t_list		*stack_a;
	t_list		*stack_b;

	//atexit(leaks);
	if (argc < 2)
		exit (1);
	if (argv[1][0] == '\0')
		ft_error();
	array = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (ft_checkerror(argc, argv) == ERROR)
		ft_error();
	else
	{
		array = ft_toarray(argc, argv);
		ft_tolist(&stack_a, array);
		if ((NOT_ORDERED == ft_checkorder(&stack_a))
			&& (NO_ERROR == ft_checkdupes(&stack_a)))
			ft_deliver(&stack_a, &stack_b);
		ft_free_end(array);
	}
	freestacks(&stack_a, &stack_b);
	return (0);
}
