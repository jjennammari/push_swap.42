/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:49:09 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/18 18:53:55 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_node **a, t_node **b)
{
	int	stack_size;

	stack_size = count_stack_size(*a);
	if (!check_stack_sorted(a))
	{
		if (stack_size > 1 && stack_size < 6)
			tiny_sort(a, b);
		else
			big_sort(a, b);
	}
}
