/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos_on_buttom.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:23:07 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/24 22:25:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_pos_on_buttom(t_hub *stack, int start, int stop, size_t size)
{
	t_hub	*node;

	node = NULL;
	while (stack != NULL)
	{
		if (stack->position >= start && stack->position <= stop)
			node = stack;
		stack = stack->next;
	}
	return (size - node->index);
}
// int check_pos_on_buttom(t_hub *stack, int pos, size_t size)
// {
//     t_hub   *node;

//     node = NULL;
//     while (stack != NULL)
//     {
//         if (stack->position >= start && stack->position <= stop)
//             node = stack;
//         stack = stack->next;
//     }
//     return (size - node->index);
// }
