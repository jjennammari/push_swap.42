#include "push_swap.h"

void    tiny_sort(t_node **a, t_node **b)
{
    int stack_size;

    stack_size = count_stack_size(*a);
    if (stack_size <= 3)
        sort_max_three(a);
    else if (stack_size >= 4 && stack_size <= 5)
        sort_max_five(a, b, stack_size);
}

void	sort_max_three(t_node **stack)
{
	int	max;
	t_node	*temp;
	t_node	*last_node;

	max = get_max_value(stack);
	last_node = find_last_node(stack);
	if (last_node->data != max)
	{
		if ((*stack)->data == max)
			rotate_a(stack);
		else if ((*stack)->data != max)
			reverse_rotate_a(stack);
	}
	temp = (*stack)->next;
	if ((*stack)->data > temp->data)
		swap_a(stack);
}

void	sort_max_five(t_node **a, t_node **b, int size)
{
	int	min;
	int	counter;

	counter = 0;
	while (size > 3)
	{
		min = get_min_value(a);
		push_to_b(a, b, min);
		size--;
		counter++;
	}
	sort_max_three(a);
	while (counter > 0)
	{
		push_a(a, b);
		counter--;
	}
}

void	push_to_b(t_node **a, t_node **b, int min)
{
	t_node	*second_last;

	second_last = get_secondlast_node(a);
	while ((*a)->data != min)
	{
		if ((second_last->data == min) || (second_last->next->data == min))
			reverse_rotate_a(a);
		else
			rotate_a(a);
	}
	push_b(a, b);
}
