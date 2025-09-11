#include "push_swap.h"

void	create_stack(t_node **a, char **argv, int argc)
{
	long	nbr;
	int		i;
	int		*argv_array;

	argv_array = malloc(sizeof(int) * argc - 1);
	if (!argv_array)
		exit(1);
	create_array(argv_array, argv, argc - 1);
	i = argc - 1;
	while (i > 0)
	{
		nbr = get_index(argv_array, argv, argc - 1);
		add_to_stack(a, (int)nbr);
		i--;
		argc--;
	}
}

void	add_to_stack(t_node **top, int nbr)
{
	t_node	*temp;
	t_node  *new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		error_malloc(top);
	new_node->data = nbr;
	temp = *top;
	new_node->next = temp;
	*top = new_node;
}
