/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:52:04 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/20 17:56:38 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rotate_a(t_data *stack)
{
    t_hub   *tmp;
    t_hub   *tmp1;
    t_hub   *tmp2;

    tmp = stack->a;
    tmp1 = stack->a->next;
    tmp->next = NULL;
    tmp2 = ft_lstlast(tmp1);
    tmp2->next = tmp;
    stack->a = tmp1;
    write(1 ,"ra\n", 3);
}
