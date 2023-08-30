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
int	ft_slen(int argc, char **argv)
{
	int x;
	int	len;

	x = 1;
	len = 0;
	while (x < argc)
	{
		len += ft_strlen(argv[x]);
		x++;
	}
	return (len);
}

char	**ft_toarray2(int argc, char **argv, char **arr)
{
	int		x;
	int		y;
	int		len;
	char	*s;

	x = 0;
	y = 1;
	len = ft_slen(argc, argv);
	while (y < argc)
	{

	}
}

char	**ft_toarray(int argc, char **argv)
{
	char	**arr;

	if (!argv)
		return (NULL);
	arr = malloc(argc * sizeof(char *));
	if (!arr)
		return (NULL);
	arr = ft_toarray2(argc, argv, arr);

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

/*
		if(ft_strchr(argv[y], ' ' == 0))
		{
			arr[x] = malloc(ft_strlen(argv[y]) + 1);
			if (!arr[x])
			{
				ft_free(arr, x);
				return (NULL);
			}
			ft_strlcpy(arr[x],argv[y], sizeof(arr[x]));
		}
		else
		{

		}
		x++;
		y++;
		*/