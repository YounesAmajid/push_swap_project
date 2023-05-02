/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_chunks_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 01:13:39 by yamajid           #+#    #+#             */
/*   Updated: 2023/05/02 15:36:28 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_in_range(int pos, int start, int stop)
{
	if (pos >= start && pos <= stop)
		return (1);
	return (0);
}

void	ft_push_chunk(t_data **stack, int start, int stop)
{
	int		r;
	int		rr;
	size_t	size;
	int		i;

	i = -1;
	while ((*stack)->a != NULL && ++i <= stop - start)
	{
		size = hubsize((*stack)->a);
		r = check_pos_on_top((*stack)->a, start, stop, size);
		rr = check_pos_on_buttom((*stack)->a, start, stop, size);
		while (r < rr && !is_in_range((*stack)->a->position, start, stop))
			ft_rotate_a(*stack);
		while (r >= rr && !is_in_range((*stack)->a->position, start, stop))
			ft_reverse_rotate_a(*stack);
		ft_push_to_b(stack);
		if ((*stack)->b->position < (start + ((stop - start) / 2))
			&& hubsize((*stack)->b) > 1)
			ft_rotate_b(*stack);
	}
}

void	ft_get_chunks(t_data *stack, int dv, size_t size)
{
	int		start;
	int		stop;
	int		left;
	int		i;

	(void)stack;
	start = 0;
	i = -1;
	left = size % dv;
	while (++i < dv)
	{
		stop = (size / dv) * (i + 1) - 1;
		if (i == dv - 1)
			stop = size - 1;
		ft_push_chunk(&stack, start, stop);
		start = stop + 1;
	}
	size = hubsize(stack->b);
}
