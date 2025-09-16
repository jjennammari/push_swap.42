/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:15:36 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/15 18:15:37 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	t_node	*n1;
	t_node	*n2;

	n1 = *stack;
	n2 = n1->next;
	n1->next = n2->next;
	n2->next = n1;
	*stack = n2;
}

void	swap_a(t_node **a)
{
	if (!a || !(*a)->next)
		return ;
	swap(a);
	write (1, "sa\n", 3);
}

void	swap_b(t_node **b)
{
	if (!b || !(*b)->next)
		return ;
	swap(b);
	write (1, "sb\n", 3);
}

void	swap_ab(t_node **a, t_node **b)
{
	if (!a || !b || !(*a)->next || !(*b)->next)
		return ;
	swap(a);
	swap(b);
	write (1, "ss\n", 3);
}
