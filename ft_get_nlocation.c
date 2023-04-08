/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nlocation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:25:50 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/06 14:05:10 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    get_nlocation(t_hub *stack, size_t size, int pos)
{
    t_hub   *tmp;
    int i;
    
    tmp = stack;
    i = 0;
    while (tmp != NULL)
    {
        if (tmp->position == pos)
        {
            if (i <= (size / 2))
                return (1);
            else
                return (0);
        }
        tmp = tmp->next;
        i++;
    }
    return (-1);
}