#include "push_swap.h"

void	rotate(t_node **top)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*last;

	n1 = *top;
	n2 = n1->next;
	last = n2;
	while (last->next != NULL)
		last = last->next;
	n1->next = NULL;
	last->next = n1;
	*top = n2;
}

void	rotate_a(t_node **a)
{
	if (!a || !(*a)->next)
		return ;
	rotate (a);
	write (1, "ra\n", 3);
}

void	rotate_b(t_node **b)
{
	if (!b || !(*b)->next)
		return ;
	rotate (b);
	write (1, "rb\n", 3);
}

void	rotate_ab(t_node **a, t_node **b)
{
	if (!a || !(*a)->next || !b || !(*b)->next)
		return ;
	rotate (a);
	rotate (b);
	write (1, "rr\n", 3);
}
