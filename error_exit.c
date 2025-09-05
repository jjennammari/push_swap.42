#include "push_swap.h"

void	error_int(t_node **a)
{
	int	i;

	if (*a)
	{
		i = count_stack_size(a);
		while (i > 0)
		{
			free(*a);
			i--;
			a++;
		}
	}
	write (1, "Error: int\n", 6);
	exit(1);
}

void    error_digit(t_node **a)
{
    int i;

    if (*a)
    {
        i = count_stack_size(a);
        while (i > 0)
        {
            free(*a);
            i--;
            a++;
        }
    }
    write (1, "Error: digit\n", 13);
    exit(1);
}

void    error_double(t_node **a)
{
    int i;

    if (*a)
    {
        i = count_stack_size(a);
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

void    error_malloc(t_node **a)
{
    int i;

    if (*a)
    {
        i = count_stack_size(a);
        while (i > 0)
        {
            free(*a);
            i--;
            a++;
        }
    }
    write (1, "Error: malloc\n", 6);
    exit(1);
}
