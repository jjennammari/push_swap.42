#include "push_swap.h"

void	error_int(t_node **a)
{
	long	i;
	t_node	*temp;

	temp = *a;
	if (*a)
	{
		i = count_stack_size(temp);
		while (i > 0)
		{
			free(*a);
			i--;
			a++;
		}
	}
	write (1, "Error: int\n", 11);
	exit(1);
}

void    error_digit(t_node **a)
{
    int i;
	t_node	*temp;

	temp = *a;
    if (*a)
    {
        i = count_stack_size(temp);
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
	t_node	*temp;

	temp = *a;
    if (*a)
    {
        i = count_stack_size(temp);
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
	t_node	*temp;

	temp = *a;
    if (*a)
    {
        i = count_stack_size(temp);
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

void	error_array(int *array, int size)
{
	int	i;

	if (!*array)
	{
		while (size > 0)
		{
			free(array);
			size--;
			array++;
		}
	}
	write (1, "Error: array\n", 13);
	exit(1);
}
