#include "push_swap.h"

void	reverse_rotate(t_node **top)
{
	t_node	*n2;
	t_node	*second_last;
	t_node	*last_node;

	n2 = *top;
	second_last = n2;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last_node = second_last->next;
	last_node->next = n2;
	second_last->next = NULL;
	*top = last_node;
}

void	reverse_rotate_a(t_node **a)
{
	if (!a || !(*a)->next)
		return ;
	reverse_rotate(a);
	write (1, "rra\n", 4);
}

void	reverse_rotate_b(t_node **b)
{
	if (!b || !(*b)->next)
		return ;
	reverse_rotate(b);
	write (1, "rrb\n", 4);
}

void	reverse_rotate_ab(t_node **a, t_node **b)
{
	if (!a || !b || !(*a)->next || !(*b)->next)
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	write (1, "rrr\n", 4);
}
