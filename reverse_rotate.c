#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*second_last;
	t_node	*last;

	first = *stack;
	second_last = get_secondlast_node(stack);
	last = second_last->next;
	second_last->next = last->next;
	last->next = first;
	*stack = last;
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
