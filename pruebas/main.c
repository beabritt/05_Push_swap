/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:53:23 by becamino          #+#    #+#             */
/*   Updated: 2023/09/12 18:03:42 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"


void	ft_tolist(t_list **stack_a, char **array)
{
	size_t	i;
	size_t	x;
	int		n;
	t_list	*prueba;

	i = 0;
	n = 0;
	x = ft_arrlen(array);
	printf("%zu\n", x);
	while (i < x)
	{
		n = ft_atoi(array[i]);
		ft_createnode(stack_a, n);
		i++;
	}
	prueba = *stack_a;
	printf("%d\n", prueba->n);
	printf("%d\n", prueba->order);
	prueba = prueba->next;
	printf("%d\n", prueba->n);
	printf("%d\n", prueba->order);
	prueba = prueba->next;
	printf("%d\n", prueba->n);
	printf("%d\n", prueba->order);
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
	int			x;
	char		**array;
	t_list		*stack_a;
	t_list		*stack_b;


	// printf("Nombre del programa: %s\n", argv[0]);
	// printf("El nº de argumentos es: %d\n", argc);
	// printf("%s\n", argv[1]);
	// printf("%s\n", argv[2]);
	// printf("%s\n", argv[3]);
	
	//system("leaks a.out");
	if (argc < 3)
		return (0);
	x = 5;
	array = NULL;
	stack_a = NULL;
	stack_b = NULL;
	n = ft_checkerror(argc, argv);
	printf("Errores: %d\n", n);
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
	//ft_swap(&stack_a);
	stack_b = ft_lstnew(x);
	printf("llega\n");
	// printf("push:\n");
	// ft_push(&stack_a, &stack_b);
	// printf(rotate:\n");
	ft_revrotate(&stack_a);
	printf("stack a:\n");
	print_list(&stack_a);
	printf("stack b:\n");
	print_list(&stack_b);
	ft_free_end(array);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}

