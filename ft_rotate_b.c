/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:39:32 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/24 22:23:56 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_b(t_data *stack)
{
	t_hub *tmp;
	t_hub *tmp1;
	t_hub *tmp2;

	tmp = stack->b;
	tmp1 = stack->b->next;
	tmp->next = NULL;
	tmp2 = ft_lstlast(tmp1);
	tmp2->next = tmp;
	stack->b = tmp1;
	write(1, "rb\n", 3);
}