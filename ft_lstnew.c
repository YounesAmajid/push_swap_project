/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:51:39 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/26 23:34:48 by yamajid          ###   ########.fr       */
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
