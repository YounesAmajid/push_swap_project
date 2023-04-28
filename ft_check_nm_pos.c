/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nm_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:05:00 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/24 22:24:53 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_nm_pos(t_hub *stack, size_t size, int pos)
{
	size_t	i;

	if (stack == NULL)
		return (-1);
	i = 0;
	while (stack->position != pos)
	{
		i++;
		stack = stack->next;
	}
	if (i <= size / 2)
		return (1);
	else
		return (0);
}
