/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:53:23 by becamino          #+#    #+#             */
/*   Updated: 2023/09/06 17:18:05 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

t_list	*ft_tolist(t_list *stack_a, char **array)
{
	size_t	i;
	size_t	x;
	int		n;
	t_list	*node;
	
	i = 0;
	n = 0;
	x = ft_arrlen(array);
	printf("%zu\n", x);
	while (i < x)
	{
		n = ft_atoi(array[i]);
		printf("%d\n", n);
		node = ft_lstnew(n);
		n = ft_lstsize(node);
		if (n == 1)
			stack_a = node;
		ft_lstadd_back(&stack_a, node);
		i++;
	}
	return (stack_a);
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
	printf("%s", s);
	printf("%s", "a\n");
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
	//size_t	i;
	//int		x;
	//size_t	s;
	//int		content;
	char		**array;
	t_list		*stack_a;

	//n = (size_t)argc - 1;
	printf("Nombre del programa: %s\n", argv[0]);
	printf("El nº de argumentos es: %d\n", argc);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%s\n", argv[3]);
	array = NULL;
	stack_a = NULL;
	n = ft_checkerror(argc, argv);
	printf("Errores: %d\n", n);
	if (n != 0)
	{
		ft_werror(array);
		return (0);
	}
	array = ft_toarray(argc, argv);
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
	
	stack_a = ft_tolist(stack_a, array);
	printf("%d\n", stack_a->content);
	printf("%d\n", stack_a->order);
	
	ft_free_end(array);
	ft_lstclear(&stack_a);
	return (0);
}

