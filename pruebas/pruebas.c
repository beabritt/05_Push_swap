#include<stdio.h>
#include "pruebaslib.h"



int	main (int argc, char *argv[])
{

	size_t	n;
	size_t	i;
	size_t	x;
	char	**array;

	n = (size_t)argc - 1;
	printf("Nombre del programa: %s\n", argv[0]);
	printf("El nº de argumentos es: %zu\n", n);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%s\n", argv[3]);

	printf("Después de split:");

	i = 1;
	x = 0;
	while (i < n)
	{
		array = ft_split(argv[i], ' ');
		prinft("%s\n", array[x]);
		i++;
		x++;
	}
	free(array);
	return (0);
}