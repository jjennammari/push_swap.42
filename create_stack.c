#include "push_swap.h"

void	create_stack(t_node **a, char **argv, int argc)
{
	long	nbr;
	int	i;

	i = 1;
	while (i <= argc)
	{
		if (!check_if_number(argv[i]))
			error_digit(a);
		nbr = ft_atol(argv[i]);
		if ((nbr <= -2147483648) || (nbr >= 2147483647))
			error_int(a);
		if (check_if_double(a, (int)nbr))
			error_double(a);
		add_to_stack(a, (int)nbr);
		i ++;
	}
}

t_node  **add_to_stack(t_node **top, int nbr)
{
	t_node	*n1;
	t_node  *new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		error_malloc(top);
	new_node->data = nbr;
	n1 = *top;
	new_node->next = n1;
	*top = new_node;
	return (top);
}
