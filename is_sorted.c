/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:36:40 by yamajid           #+#    #+#             */
/*   Updated: 2023/03/27 17:15:08 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    is_sorted(t_hub *stack)
{
    t_hub   *tmp;
    t_hub   *tmp1;

    tmp = stack;
    int i = 0;
    while(tmp)
    {
        if(tmp->position != i)
            return(0); // not sorted
        i++;
        tmp = tmp->next;
    }
    return(1);
}