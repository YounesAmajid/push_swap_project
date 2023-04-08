/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:26:15 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/07 16:08:18 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_5_args(t_data   *stack)
{
    int half;

    half = get_nlocation(stack->a, hubsize(stack->a), 0);
    while (stack->a->position != 0 && half == 1)
        ft_rotate_a(stack);
    while (stack->a->position != 0 && half == 0)
        ft_reverse_rotate_a(stack);
    ft_push_to_b(&stack);
    while (stack->a->position != 1 && half == 0)
        ft_rotate_a(stack);
    while (stack->a->position != 1 && half == 1)
        ft_reverse_rotate_a(stack);
    ft_push_to_b(&stack);
    ft_sort_3_arg(stack);
    ft_push_to_a(&stack);
    ft_push_to_a(&stack);
}
