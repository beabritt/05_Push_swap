#include "pruebaslib.h"
//Checks if every arg is clear of the rest of chars. 
int	ft_checknum(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{	
			while (argv[i][j] == '-')
			{
				j++;
				if (argv[i][j] == '-' || argv[i][j] == ' ')
					return (-1);
			}
			if (argv[i][j] == ' ' || argv[i][j] == '-' 
				|| (argv[i][j] >= '0' && argv[i][j] <= '9'))
				j++;
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
int	ft_checkmaxmin(int argc, char **argv)
{
	int	i;
	int	minus;

	i = 1;
	while (i < argc)
	{
		minus = ft_strchr(argv[i], '-');
		if (minus == 0)
		{
			minus = ft_atoi(argv[i]);
			if (minus < 0)
				return (-1);
		}
		else
		{
			minus = ft_atoi(argv[i]);
			if (minus > 0)
				return (-1);
		}
		i++;
	}
	return (0);
}
/*int	ft_checkdupe(int argc, char **argv)
{

}*/

