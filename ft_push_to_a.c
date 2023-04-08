/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:39:46 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/06 13:28:48 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void ft_push_to_a(t_data **stack)
{
	t_hub	*node;

	if ((*stack)->b == NULL)
		return ;
	node = (*stack)->b;
	(*stack)->b = (*stack)->b->next;
	node->next = (*stack)->a;
	(*stack)->a = node;
	write(1, "pa\n", 3);
}
