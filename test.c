#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	size;
	t_node	*stack;

	stack = NULL;
	create_stack(&stack, argv, argc);
	size = count_stack_size(&stack);
	while (size > 0)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
		size--;
	}
	return (0);
}
