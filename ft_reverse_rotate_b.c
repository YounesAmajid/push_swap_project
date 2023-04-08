/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:39:40 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/04 22:33:14 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void ft_reverse_rotate_b(t_data *stack)
{
    t_hub   *tmp;
    t_hub   *tmp1;
    
    tmp = stack->b;
    tmp = node_befoor_last(stack->b);
    tmp1 = ft_lstlast(stack->b);
    tmp->next = NULL;
    tmp1->next = stack->b;
    stack->b = tmp1;
    write(1, "rra\n", 4);
}