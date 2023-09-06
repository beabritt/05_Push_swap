
*Madri

./a.out  2 3 5 6 " 0000042 +88 -52  0000042 +88 -52 0000042 +88 -52 0000042 +88 -52"

 "          0000042      +88 -52  0000042 +88 -52 0000042 +88 -52 0000042 +88 -52"
 "0000042      +88 -52  0000042 +88 -52 0000042 +88 -52 0000042 +88 -52"
 "   +88 -52  0000042 +88 -52 0000042 +88 -52 0000042 +88 -52"
 "-52  0000042 +88 -52 0000042 +88 -52 0000042 +88 -52"
 "0000042 +88 -52 0000042 +88 -52 0000042 +88 -52"
 "+88 -52 0000042 +88 -52 0000042 +88 -52"
 "0000042 +88 -52 0000042 +88 -52 0000042 +88 -52"



1 3 2


 5 42 32
 -8 -1 -4

 -500 200 0


 typedef struct s_stack
{
	int				nbr;
	int				order;
	int				pos;
	struct s_stack	*next;
}t_stack;


5   1   1
42  2   3
32  3   2


int aux (const char *argv)
{
	int j;
	
	j = 0;
	while (argv[j] != '\0')
	{	
		while (argv[j] == '-')
		{
			j++;
			if (argv[j] == '-' || argv[j] == ' ')
				return (-1);
		}
		if (argv[j] == ' ' || argv[j] == '-' 
			|| (argv[j] >= '0' && argv[j] <= '9'))
			j++;
		else
			return (-1);
	}
}

int ft_checknum (const char *argv)
{
	int j;
	

	j = 0;
	while (*argv != '\0')
	{	
		while (*argv == '-')
		{
			argv++;
			if (argv[j] == '-' || argv[j] == ' ')
				return (-1);
		}
		if (argv[j] == ' ' || argv[j] == '-' 
			|| (argv[j] >= '0' && argv[j] <= '9'))
			argv++;
		else
			return (-1);
	}
}


int	ft_checknums(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(i < argc)
	{
		aux(argv[i]);
		i++;
	}
	printf("1 = 0\n");
	return (0);
}