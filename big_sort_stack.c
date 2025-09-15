/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 22:04:55 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/13 23:43:50 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_node **a, t_node **b)
{
	int		max;
	int		bit_size;
	int		bit_place;
	t_node	*temp;

	max = get_max_value(a);
	bit_size = count_bits(max);
	bit_place = 0;
	while (bit_size > bit_place)
	{
		temp = *a;
		while (temp != NULL)
		{
			if (((temp->data >> bit_place) & 1) == 0)
			{
				move_to_top(a, temp->data);
				push_b(a, b);
				temp = *a;
			}
			else
				temp = temp->next;
		}
		while (*b != NULL)
			push_a(a, b);
		bit_place++;
	}
}

void	move_to_top(t_node **a, int value)
{
	int		size;
	int		index;
	t_node	*temp;

	temp = *a;
	size = count_stack_size(*a);
	index = 0;
	while (temp != NULL && temp->data != value)
	{
		index++;
		temp = temp->next;
	}
	if (index == 0)
		return ;
	else if (index <= size / 2)
	{
		while ((*a)->data != value)
			rotate_a(a);
	}
	else
	{
		while ((*a)->data != value)
			reverse_rotate_a(a);
	}
}
