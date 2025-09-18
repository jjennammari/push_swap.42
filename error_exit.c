/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:14:33 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/15 18:14:35 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_array(int *array, char **argv, bool splitted)
{
    int	i;
    if (!array)
	return ;
    if (splitted)
    {
	i = 0;
	while (argv[i])
	{
	    free(argv[i]);
	    i++;
	}
    }
    free(array);
    write (1, "Error\n", 6);
    exit(1);
}

void	free_stack(t_node **stack, int size)
{
    if (!*stack)
	return ;
    while (size > 0)
    {
	free(stack);
	(*stack) = (*stack)->next;
    }
}
