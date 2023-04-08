/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hubsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:12:27 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/04 21:12:51 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t  hubsize(t_hub *stack)
{
    t_hub *tmp;
    int i;

    i = 0;
    tmp = stack;
    while (tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}
