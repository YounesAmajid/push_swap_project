/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:55:57 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/24 22:23:26 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data *stack)
{
	int data;
	int position;

	data = stack->a->data;
	position = stack->a->position;
	stack->a->data = stack->a->next->data;
	stack->a->position = stack->a->next->position;
	stack->a->next->data = data;
	stack->a->next->position = position;
	write(1, "sa\n", 3);
}