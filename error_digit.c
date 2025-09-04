#include "push_swap.h"

void	error_digit(t_node **a)
{
	int	i;

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
	write (1, "Error: digit\n", 13);
	exit(1);
}
