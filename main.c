/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:05:33 by becamino          #+#    #+#             */
/*   Updated: 2023/09/25 12:30:56 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_deliver(t_list **stack_a, t_list **stack_b, int counter)
{
	if (counter <= 3)
	{
		*stack_b = NULL;
		ft_alg3(stack_a, counter);
		printf("pasa3\n");
	}
	else if (counter <= 5)
	{
		ft_alg5(stack_a, stack_b, counter);
		printf("pasa5\n");
	}
	else if (counter <= 100)
	{
		ft_alg100(stack_a, stack_b, counter);
	}
	else
		ft_alg500(stack_a, stack_b, counter);
	
}

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

	y = 1;
	len = ft_slen(argc, argv);
	s = (char *)ft_calloc(len, sizeof(char *));
	if (!s)
		return (0);
	while (y < argc)
	{
		s = ft_strjoin_ps(s, argv[y]);
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

int	main (int argc, char *argv[])
{
	int 		n;
	//int			x;
	int			count;
	char		**array;
	t_list		*stack_a;
	t_list		*stack_b;


	
	//system("leaks a.out");
	if (argc < 2)
		return (0);
	array = NULL;
	stack_a = NULL;
	stack_b = NULL;
	n = ft_checkerror(argc, argv);
	if (n != 0)
	{
		ft_werror(array);
		return (0);
	}
	array = ft_toarray(argc, argv);
	ft_tolist(&stack_a, array);
	n = ft_checkorder(&stack_a);
	if (n != 0)
	{
		ft_werror(array);
		return (0);
	}
	printf("print_list:\n");
	print_list(&stack_a);
	count = ft_lstsize(stack_a);
	printf("list ordenada:\n");
	ft_deliver(&stack_a, &stack_b, count);
	printf("FINAL:\n");
	printf("stack_a:\n");
	print_list(&stack_a);
	printf("stack_b:\n");
	print_list(&stack_b);
	ft_free_end(array);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}

