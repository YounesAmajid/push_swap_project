/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back_to_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:35:57 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/23 19:10:34 by yamajid          ###   ########.fr       */
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

void    ft_push_back_to_a(t_data *stack)
{
    int i;
    size_t size;
    size_t  size2;

    size = hubsize(stack->b);
    i = size - 1;
    if (stack->b == NULL)
        return ;
    while (i >= 0)
    {
        size2 = top_or_buttom(stack->b, i);
        while (stack->b->position != i && size2 == 1)
            ft_rotate_b(stack);
        while (stack->b->position != i && size2 == 0)
            ft_reverse_rotate_b(stack);
        ft_push_to_a(&stack);
        i--;
    }
    
}