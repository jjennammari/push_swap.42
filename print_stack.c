#include "push_swap.h"

void	print_stack(t_node *stack)
{
	int	size;

	size = count_stack_size(stack);
	while (size > 0)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
		size--;
	}
}
