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
	int	max;
	int	bit_size;
	int	bit_place;
	int	stack_size;
	int	i;

	stack_size = count_stack_size(*a);
	max = get_max_value(a);
	bit_size = count_bits(max);
	bit_place = 0;
	while (bit_place < bit_size)
	{
		i = 0;
		while (i < (stack_size - 1))
		{
			if (((*a)->data >> bit_place & 1) == 0)
				push_b(a, b);
			else
				rotate_a(a);
			i++;
		}
		while (*b != NULL)
			push_a(a, b);
		bit_place++;
	}
}
