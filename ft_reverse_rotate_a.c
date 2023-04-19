/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:51:54 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/19 21:16:18 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_reverse_rotate_a(t_data *stack)
{
    t_hub   *tmp;
    t_hub   *tmp1;
    
    tmp = stack->a;
    tmp = node_before_last(stack->a);
    tmp1 = ft_lstlast(stack->a);
    tmp->next = NULL;
    tmp1->next = stack->a;
    stack->a = tmp1;
    write(1, "rra\n", 4);
}
