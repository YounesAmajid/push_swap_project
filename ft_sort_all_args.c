/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:58:51 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/23 18:52:32 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_sort_all_args(size_t size, t_data *stack)
{

	size = hubsize(stack->a);
	if (stack->a == NULL)
		return ;
	else if (size == 2)
		swap_a(stack);
	else if (size == 3)
		ft_sort_3_arg(stack);
	else if (size == 4)
		ft_sort_4_args(stack);
	else if (size == 5)
		ft_sort_5_args(stack);
	else if (size > 5 && size < 200)
	{
		ft_get_chunks(stack, 5, size);
		ft_push_back_to_a(stack);
	}
	// else
	// {
	// 	ft_get_chunks(stack, 12, size);
	// 	ft_push_back_to_a(stack);
	// }
}	