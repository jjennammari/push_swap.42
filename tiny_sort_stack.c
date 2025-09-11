#include "push_swap.h"

void    tiny_sort(t_node *a, t_node *b)
{
    int stack_size;

    stack_size = count_stack_size(a);
    if (stack_size <= 3)
        sort_max_three(a);
    else if (stack_size >= 4 && stack_size <= 5)
        sort_max_five(a, b, stack_size);
}

void	sort_max_three(t_node *stack)
{
	int		max;
	t_node	*temp;
	t_node	*last_node;

	max = get_max_value(stack);
	last_node = find_last_node(stack);
	if (last_node->data != max)
	{
		if (stack->data == max)
			rotate_a(&stack);
		else if (stack->data != max) // stack == 1 (no 2) and points to midde == 2 (no 4)
		{
			printf("Stack before rra: %d\n", stack->data);
			printf("Temp before rra: %d\n", temp->data);
			reverse_rotate_a(&stack); // after this, middle = 1 (no 2)
			printf("Stack after rra: %d\n", stack->data);
			temp = stack->next;
			printf("Temp after rearranging: %d\n", temp->data);
		}
	}
	if (stack->data > temp->data) // stack == 0 (no 2) current middle && temp == 2 (no 4) current last
		swap_a(&stack);
}

void	sort_max_five(t_node *a, t_node *b, int size)
{
	int	min;
	t_node	*first_node;

	first_node = a;
	while (size > 3)
	{
		min = get_min_value(a);
		while (first_node->data != a->data)
		{
			if (first_node->next->data == a->data || first_node->next->next->data == a->data)
				rotate_a(&a);
			else
				reverse_rotate(&a);
			a = a->next;
		}
		push_b(&a, &b);
		size--;
	}
	sort_max_three(a);
	sort_max_three(b);
	while (size < 5)
	{
		push_a(&a, &b);
		size++;
	}
}
