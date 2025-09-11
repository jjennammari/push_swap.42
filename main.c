/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 05:21:16 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/11 05:27:56 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if ((argc == 1) || !(argv[1][0]))
		return (NULL);
	a = NULL;
	b = NULL;
	create_stack(&a, argv, argc);
	// check if stack is already sorted, print stack is sorted?
}
