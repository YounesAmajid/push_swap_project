/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:51:18 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/03 14:43:51 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstaddback(t_hub **stack, t_hub *newnode)
{
	t_hub	*lastnode;
	t_hub	*tmp;
	
	tmp = *stack;
	newnode->position = 0;
	if (!stack || !newnode)
	 	return ;
	while (tmp)
	{
		if (newnode->data > tmp->data)
			newnode->position++;
		else
			tmp->position++;
		tmp = tmp->next;
	}
	if (!*stack)
	{
		*stack = newnode;
		return ;
	}
	lastnode = ft_lstlast(*stack);
	lastnode->next = newnode;
}
