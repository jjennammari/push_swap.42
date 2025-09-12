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
	print_stack(a);
	tiny_sort(&a, &b);
	print_stack(a);
	free(a);
	return (0);
}
