/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:58:24 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/05 13:59:32 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void swap_b(t_data *stack)
{
	int data;
	int position;
	
	data = stack->b->data;
	position = stack->b->position;
	stack->b->data = stack->b->next->data;
	stack->b->position = stack->b->next->position;
	stack->b->next->data = data;
	stack->b->next->position = position;
	write(1,"sa\n", 3);
}