/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:14:10 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/15 18:14:14 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_array(int *arr, char **argv, int size, bool splitted)
{
	int	nbr;
	int	i;

	i = 0;
	while (i < size)
	{
		if (!check_if_number(argv[i]))
			error_array(arr, argv, splitted);
		nbr = ft_atol(argv[i]);
		if ((nbr < -2147483648) || (nbr > 2147483647))
			error_array(arr, argv, splitted);
		if (check_if_double(arr, (int)nbr))
			error_array(arr, argv, splitted);
		arr[i] = (int)nbr;
		i++;
	}
	sort_array(arr, size);
}

void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		j = (i + 1);
		temp = 0;
		while (j < size)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				j = i;
			}
			j++;
		}
		i++;
	}
}

int	get_index(int *arr, char **argv, int size)
{
	int	i;

	i = 0;
	while (arr[i] != (int)ft_atol(argv[size -1]))
		i++;
	return (i);
}
