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
	size = count_stack_size(a);
	temp = a;
	while (size > 0)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
		size--;
	}
	tiny_sort(a, b);
	return (0);
}
