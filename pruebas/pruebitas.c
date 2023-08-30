#include "pruebaslib.h"

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

int main (int argc, char **argv)
{
    int len;

    printf("%d\n", argc);
    len = ft_slen(argc, argv);
    printf("%d\n", len);
    return (0);
}