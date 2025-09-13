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
	int		binary_size;
	int		bit_place;
	t_node	*temp;

	max = get_max_value(a);
	binary_size = count_bits(max);
	bit_place = 1;
	while (binary_size > bit_place)
	{
		temp = *a;
		while (temp != NULL)
		{
			if ((temp->data >> bit_place) & 1 = 0)
				push_b(&temp, b);
			else
				continue ;
			temp = temp->next;
		}
		bit_place++;
	}
}
