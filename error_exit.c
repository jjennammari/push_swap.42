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

void    error_malloc(t_node **a)
{
    int i;
    t_node  *temp;

    if (!a)
	return ;
    temp = *a;
    i = count_stack_size(temp);
    while (a != NULL && i > 0)
    {
    	free(*a);
    	i--;
	a++;
    }
    write (1, "Error\n", 6);
    exit(1);
}

void	error_array(int *array, int size)
{
    if (!array)
	return ;
    while (size > 0)
    {
        free(array);
        size--;
	array++;
    }
    write (1, "Error\n", 6);
    exit(1);
}
