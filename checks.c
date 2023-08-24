#include "push_swap.h"

//Checks if its possible to atoi every arg. 
int	ft_checknum(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;

	while(i <= argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{	
			if (argv[i][j] == ' ' || argv[i][j] == '-' 
				|| (argv[i][j] >= '0' && argv[i][j] <= '9'))
				j++;
			else
				return (-1);
		}
		i++;
		
	}
	if (i == argc)
		return (0);
	else
		return (-1);
}