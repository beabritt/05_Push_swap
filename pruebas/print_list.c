#include "pruebaslib.h"

void	print_list(t_list **stack)
{
	t_list  *aux;

    if (*stack == NULL)
        return;
    aux = *stack;
    while(aux->next != NULL)
    {
        printf("%d\n", aux->n);
        aux = aux->next;
    }
    printf("%d\n", aux->n);
}