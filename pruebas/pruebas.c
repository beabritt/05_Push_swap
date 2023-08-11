#include<stdio.h>
#include "pruebaslib.h"


size_t	ft_checkspace(char *s)
{
	size_t	x;

	if (!s)
		return(NULL);
	x = strchr(s, ' ');
	return (x);
}

int	main (int argc, char *argv[])
{
	size_t n;
	size_t	i;
	size_t	x;
	size_t	s;
	int		content;
	char	**array;
	t_list	*stack_a;

	n = (size_t)argc - 1;
	printf("Nombre del programa: %s\n", argv[0]);
	printf("El nº de argumentos es: %zu\n", n);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	//printf("%s\n", argv[3]);

	/*x = 0;
	while (x == 0)
	{
		x = ft_errors(argv);
	}
	if (x == 1)
	*/

	i = 1;
	while (i < argc)
	{
		x = ft_checkspace(argv[i]);
		if (x == 1)
		{
			array = ft_split(argv[i], ' ');
			s = 0;
			while (array[s][0] != '\0')
			{
				meter en lista;
				s++;
			}
		}
		else
		{	
			content = ft_atoi(argv[i]);
			ft_lstnew(content);
		}

	}


	printf("Después de split:\n");

/*
	i = 1;
	x = 0;
	while (i <= n)
	{
		array = ft_split(argv[i], ' ');
		printf("%s\n", array[x]);
		printf("%s\n", array[x + 1]);
		i++;
		x++;
	}
	*/
	free(array);
	return (0);
}