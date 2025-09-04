#include "push_swap.h"

void	push(t_node **dest, t_node **src)
{
	t_node	*n1;

	n1 = *src;
	*src = n1->next;
	n1->next = *b;
	*b = n1;
}

void	push_a(t_node **a, t_node **b)
{
	push(&a, &b);
	write (1, "pa\n", 3);
}

void	push_b(t_node **a, t_node **b)
{
	push(&b, &a);
	write (1, "pb\n", 1);
}
