#include "pruebaslib.h"

int	main(void)
{
	char	str[] = "25";
	int		content;
	t_list	*stack_a;

	content  = ft_atoi(str);
	stack_a = ft_lstnew(content);
	printf("%i\n", stack_a->content);
}
