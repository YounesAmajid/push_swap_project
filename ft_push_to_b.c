/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:52:50 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/06 13:29:01 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_to_b(t_data **stack)
{
	t_hub	*node;

	if ((*stack)->a == NULL)
		return ;
	node = (*stack)->a;
	(*stack)->a = (*stack)->a->next;
	node->next = (*stack)->b;
	(*stack)->b = node;
	write(1, "pb\n", 3);
}
