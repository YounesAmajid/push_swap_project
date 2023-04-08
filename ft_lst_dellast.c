/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_dellast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:51:06 by yamajid           #+#    #+#             */
/*   Updated: 2023/03/29 23:38:57 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    ft_lst_dellast(t_hub **stack)
{
    t_hub   *tmp;
    t_hub   *tmp1;

    tmp = *stack;
    tmp1 = *stack;
    while ((*stack)->next)
    {
        tmp = *stack;
        (*stack) = (*stack)->next;
    }
    tmp->next = NULL;
    (*stack) = tmp1;
    free(tmp1);
}

