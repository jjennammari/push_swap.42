/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 23:03:49 by jemustaj          #+#    #+#             */
/*   Updated: 2025/09/13 23:06:47 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_bits(int max)
{
	int	bits;
	int	temp;

	temp = max;
	while (temp > 0)
	{
		temp = temp / 2;
		bits++;
	}
	return (bits);
}
