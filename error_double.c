#include "push_swap.h"

void    error_double(t_node **a)
{
    int i;

    if (*a)
    {
        i = count_stack_size(*a);
        while (i > 0)
        {
            free(*a);
            i--;
            a++;
        }
    }
    write (1, "Error: double\n", 14);
    exit(1);
}
