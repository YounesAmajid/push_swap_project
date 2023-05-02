/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:51:39 by yamajid           #+#    #+#             */
/*   Updated: 2023/05/01 16:35:06 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_hub	*ft_lstnew(int nbr, int pos)
{
	t_hub	*newnode;

	newnode = malloc(sizeof(t_hub));
	if (!newnode)
		return (NULL);
	newnode->data = nbr;
	newnode->position = pos;
	newnode->next = NULL;
	return (newnode);
}
