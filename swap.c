#include "push_swap.h"

void	swap(t_node **top)
{
	t_node	*n1;
	t_node	*n2;

	n1 = *top;
	n2 = n1->next;
	n1->next = n2;
	n2->next = n1;
	*top = n2;
}

void	swap_a(t_node **a)
{
	swap(&a);
	write (1, "sa\n", 3);
}

void	swap_b(t_node **b)
{
	swap(&b);
	write (1, "sb\n", 3);
}

void	swap_ab(t_node **a, t_node **b)
{
	swap(&a);
	swap(&b);
	write (1, "ss\n", 3);
}
