#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if ((argc == 1) || !(argv[1][0]))
		return (NULL);
	a = NULL;
	b = NULL;
	create_stack(&a, argv, argc);
}
