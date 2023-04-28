/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:46:35 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/26 23:50:12 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicate(t_hub *stack_a)
{
	t_hub   *tmp;
	t_hub   *tmp1;

	tmp = stack_a;
	while (tmp)
	{
		tmp1 = tmp->next;
		while (tmp1)
		{
			if (tmp->data == tmp1->data)
				return (1);
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
	return (0);
}
