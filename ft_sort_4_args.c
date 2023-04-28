/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:32:16 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/24 22:23:43 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_4_args(t_data *stack)
{
	int loc;

	loc = get_nlocation(stack->a, hubsize(stack->a), 0);
	while (1)
	{
		if (stack->a->position == 0)
		{
			ft_push_to_b(&stack);
			break ;
		}
		else
			ft_reverse_rotate_a(stack);
	}
	ft_sort_3_arg(stack);
	ft_push_to_a(&stack);
}