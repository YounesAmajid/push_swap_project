/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:36:40 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/19 21:18:54 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    is_sorted(t_hub *stack)
{
    t_hub   *tmp;

    tmp = stack;
    int i = 0;
    while(tmp)
    {
        if(tmp->position != i)
            return(0);
        i++;
        tmp = tmp->next;
    }
    return(1);
}