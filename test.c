#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	size;
	t_node	*a;
	t_node	*b;
	t_node	*temp;

	if (argc < 2)
	{
		write (1, "No args\n", 8);
		return (1);
	}
	a = NULL;
	b = NULL;
	create_stack(&a, argv, argc);
	write (1, "Stack unsorted: \n", 17);
	print_stack(a);
	write (1, "\n", 1);
	write (1, "Stack sorting operations: \n", 27);
	big_sort(&a, &b);
	write (1, "\n", 1);
	write (1, "Stack sorted: \n", 15);
	print_stack(a);
	free(a);
	return (0);
}
