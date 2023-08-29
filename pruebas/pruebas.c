#include<stdio.h>
#include "pruebaslib.h"

char	ft_toarray(int argc, char **argv)
{
	
}
void	ft_free(char **arr, size_t x)
{

	while (arr[x] != '\0')
	{
		free(arr[x]);
		x--;
	}
	free(arr);
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
			return(yn);
	return (yn);
}


int	main (int argc, char *argv[])
{
	int n;
	//size_t	i;
	//size_t	x;
	//size_t	s;
	//int		content;
	char	**array;
	//t_list	*stack_a;

	//n = (size_t)argc - 1;
	printf("Nombre del programa: %s\n", argv[0]);
	printf("El nº de argumentos es: %d\n", argc);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	//printf("%s\n", argv[3]);


	
	n = ft_checkerror(argc, argv);
	printf("%d\n", n);
	if (n != 0)
		write(1,"Error\n",6);


	

	//i es el n de args menos el nombre del prg.


	/*i = 1;
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

	}*/


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
	//free(array);
	return (0);
}