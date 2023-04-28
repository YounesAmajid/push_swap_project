/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos_on_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:22:24 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/24 22:25:04 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_pos_on_top(t_hub *stack, int first, int final, size_t size)
{
	t_hub	*node;
	int		i;

	(void)size;
	node = NULL;
	i = 0;
	while (stack != NULL)
	{
		if (stack->position >= first && stack->position <= final)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}
