#include "pruebaslib.h"

int	ft_slen(int argc, char **argv)
{
	int x;
	int	len;

	x = 1;
	len = 0;
	while (x < argc)
	{
		len += ft_strlen(argv[x]) + 1;
		x++;
	}
	printf("%d\n", len);
	return (len);
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
	printf("%zu\n", ft_strlen(s));
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

/*int	main(int argc, char *argv[])
{
	char	**array;
	size_t	x;

	printf("%i\n", argc);
	array = ft_toarray(argc, argv);
	x = 0;
	while (array[x])
	{
		printf("%s\n", array[x]);
		x++;
	}
	ft_free(array, argc);
	return(0);
}*/


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