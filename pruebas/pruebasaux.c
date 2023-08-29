#include "pruebaslib.h"

void	ft_free(char **arr, size_t x)
{
	while (x > 0)
	{
		free(arr[x]);
		x--;
	}
	free(arr);
}

char	**ft_toarray(int argc, char **argv)
{
	char	**arr;
	int		x;
	int		y;
	
	x = 0;
	y = 1;
	printf("llega");
	if (!argv)
		return (NULL);
	arr = malloc(argc * sizeof(char *));
	if (!arr)
		return (NULL);
	printf("llega2");
	while (y < argc)
	{
		//if (ft_strchr(argv[y], ' '))
		arr[x] = malloc(ft_strlen(argv[y]) + 1);
		if (!arr[x])
		{
			ft_free(arr, x);
			return (NULL);
		}
		ft_strlcpy(arr[x],argv[y], sizeof(arr[x]));
		x++;
		y++;
	}
	return (arr);
}

int	main(int argc, char *argv[])
{
	char	**array;	
	size_t	x;

	printf("%i\n", argc);
	array = ft_toarray(argc, argv);
	printf("llega");
	x = 0;
	while (array[x])
	{
		printf("%s\n", array[x]);
		x++;
	}
	ft_free(array, argc);
	return(0);
}


/*int	main(void)
{
	char	str[] = "25";
	int		content;
	t_list	*stack_a;

	content  = ft_atoi(str);
	stack_a = ft_lstnew(content);
	printf("%i\n", stack_a->content);
}*/

/*int	main(void)
{
	char	*y;
	int		resultado;

	y = "76a";
	resultado = ft_atoi(y);
	printf("\n%i", resultado);
	return (0);
}*/
