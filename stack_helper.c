/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:15:30 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/15 18:15:32 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_if_number(char *argv)
{
    while (*argv)
    {
    	if (*argv == '+' || *argv == '-')
    	{
    		if ((*argv) + 1 == '-' || (*argv) + 1 == '+')
			return (0);
	    	else
    			argv++;
    	}
     if (!(*argv >= '0' && *argv <= '9'))
        return (0);
     else
        argv++;
    }
    return (1);
}

int check_if_double(int *arr, int nbr)
{
    if (arr == NULL)
		return (0);
    while (*arr)
    {
        if (*arr == nbr)
            return (1);
        arr++;
    }
    return (0);
}

long    ft_atol(char *str)
{
    int i;
    int sign;
    long    nbr;

    i = 0;
    sign = 1;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    nbr = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + (str[i] - 48);
        i++;
    }
    return (nbr * sign);
}

int	count_stack_size(t_node *a)
{
    int	i;
    t_node	*temp;

    temp = a;
    i = 0;
    while (temp != NULL)
    {
	i++;
	temp = temp->next;
    }
    return (i);
}

int	count_argv_size(char **argv)
{
    int	    i;

    i = 0;
    while (argv[i] != NULL)
	i++;
    return (i);
}
