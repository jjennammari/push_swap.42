/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 05:21:16 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/15 18:44:59 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		stack_size;
	char	**temp;

	if ((argc == 1) || !(argv[1][0]))
		return (0);
	a = NULL;
	b = NULL;
	if (argc == 2)
	{
		temp = ft_split(argv[1], ' ');
		argc = (count_argv_size(temp) + 1);
		create_stack(&a, temp, argc);
	}
	else
		create_stack(&a, argv, argc);
	if (check_stack_sorted(&a))
		write (1, "Stack is already sorted\n", 24);
	stack_size = count_stack_size(a);
	if (!check_stack_sorted(&a))
	{
		if (stack_size > 1 && stack_size < 6)
			tiny_sort(&a, &b);
		else
			big_sort(&a, &b);
	}
//	write (1, "\n", 1);
	//print_stack(a);
	free(a);
}
