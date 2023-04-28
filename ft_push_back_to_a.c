/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back_to_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:35:57 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/24 22:27:15 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	top_or_buttom(t_hub *stack, int position)
{
	t_hub	*var;
	int		index;
	int		size;

	size = hubsize(stack);
	var = stack;
	index = 1;
	while (var->position != position)
	{
		index += 1;
		var = var->next;
	}
	if (index <= (size / 2))
		return (1);
	else
		return (0);
}

// int *get_closest(t_hub *b, int first, int second, size_t size)
// {
//     int i;
//     int result[4];

//     i = 0;
//     while (b != NULL)
//     {
//         if (b->position == first)
//             result[0] = i;
//         if (b->position == second)
//             result[2] = i;
//         i ++;
//         b = b->next;
//     }
//     result[1] = size - result[0];
//     result[3] = size - result[2];
//     // printf("%d : %d : %d : %d\n", result[0], result[1], result[2],
		//result[3]);
//     return (NULL);
// }

void	ft_push_back_to_a(t_data *stack)
{
	int i;
	size_t size;
	size_t size2;

	size = hubsize(stack->b);
	i = size - 1;
	if (stack->b == NULL)
		return ;
	while (i >= 0)
	{
		if (stack->b->position == i)
			ft_push_to_a(&stack);
		else
		{
			size2 = top_or_buttom(stack->b, i);
			while (stack->b->position != i && size2 == 1)
				ft_rotate_b(stack);
			while (stack->b->position != i && size2 == 0)
				ft_reverse_rotate_b(stack);
			ft_push_to_a(&stack);
		}
		i--;
	}
}