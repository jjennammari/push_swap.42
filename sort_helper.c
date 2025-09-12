#include "push_swap.h"

int	get_max_value(t_node **stack)
{
	int		max;
	t_node	*temp;

	temp = *stack;
	max = 0;
	while (temp != NULL)
	{
		if ((*stack)->data <= temp->data && max < temp->data)
			max = temp->data;
		temp = temp->next;
	}
	return (max);
}

int	get_min_value(t_node **stack)
{
	int		min;
	t_node	*temp;

	temp = *stack;
	min = temp->data;
	while (temp != NULL)
	{
		if ((*stack)->data >= temp->data && min > temp->data)
			min = temp->data;
		temp = temp->next;
	}
	return (min);
}

t_node	*find_last_node(t_node **stack)
{
	t_node	*last_node;

	last_node = *stack;
	while (last_node->next != NULL)
		last_node = last_node->next;
	return (last_node);
}

t_node	*get_secondlast_node(t_node **stack)
{
	t_node	*temp;

	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	return (temp);
}
