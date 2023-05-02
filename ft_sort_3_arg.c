/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:34:48 by yamajid           #+#    #+#             */
/*   Updated: 2023/05/02 15:36:01 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3_arg(t_data *stack)
{
	int	first;
	int	middle;
	int	last;

	first = stack->a->position;
	middle = stack->a->next->position;
	last = ft_lstlast(stack->a)->position;
	if (first > middle && first < last)
		swap_a(stack);
	else if (first > middle && middle < last)
		ft_rotate_a(stack);
	else if (first > last && middle > first && middle > last)
		ft_reverse_rotate_a(stack);
	else if (first < middle && middle > last)
	{
		swap_a(stack);
		ft_rotate_a(stack);
	}
	else if (first > middle && middle > last)
	{
		swap_a(stack);
		ft_reverse_rotate_a(stack);
	}
}
