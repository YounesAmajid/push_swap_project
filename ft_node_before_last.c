/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_before_last.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:43:11 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/01 14:05:44 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    *node_befoor_last(t_hub *stack)
{
    if (!stack)
        return (0);
    while (stack->next->next)
        stack = stack->next;
    return (stack);
}