/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:58:51 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/19 20:59:16 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_sort_all_args(size_t size, t_data *stack)
{

	size = hubsize(stack->a);
	if (stack->a == NULL)
		return ;
	if (size == 2)
		swap_a(stack);
	if (size == 3)
		ft_sort_3_arg(stack);
	if (size == 4)
		ft_sort_4_args(stack);
	if (size == 5)
		ft_sort_5_args(stack);
	if (size > 5 && size < 200)
		ft_push_chunks(stack, 5, size);
}