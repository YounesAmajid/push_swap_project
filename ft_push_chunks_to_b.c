/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_chunks_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 01:13:39 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/23 19:18:20 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int check_pos_on_top(t_hub *stack, int first, int final, size_t size)
{
    t_hub   *node;
    int     i;
    (void)  size;

    node = NULL;
    i = 0;
    while (stack != NULL)
    {
        if (stack->position >= first && stack->position <= final)
            return (i);
        stack = stack->next;
        i ++;
    }
    return (-1);
}

int check_pos_on_buttom(t_hub *stack, int start, int stop, size_t size)
{
    t_hub   *node;

    node = NULL;
    while (stack != NULL)
    {
        if (stack->position >= start && stack->position <= stop)
            node = stack;
        stack = stack->next;
    }
    return (size - node->index);
}

int is_in_range(int pos, int start, int stop)
{
    if (pos >= start && pos <= stop)
        return (1);
    return (0);
}


// void    ft_push_back(t_data **p)
// {
    
// }

void    ft_push_chunk(t_data **a,int start, int stop)
{
    int     r;
    int     rr;
    size_t  s;
    int     i;

    i = -1;
    while (++i <= stop - start && (*a)->a != NULL)
    {
        s = hubsize((*a)->a);
        r = check_pos_on_top((*a)->a, start, stop, s);
        rr = check_pos_on_buttom((*a)->a, start, stop, s);
        while (r <= rr && !is_in_range((*a)->a->position, start, stop))
            ft_rotate_a(*a);
        while (r > rr && !is_in_range((*a)->a->position, start, stop))
            ft_reverse_rotate_a(*a);
        ft_push_to_b(a);
        if ((*a)->b->position < (start + ((stop - start) / 2)))
            ft_rotate_b(*a);
    }
}

void    ft_get_chunks(t_data *stack, int dv, size_t  size)
{
    int start;
    int stop;
    int left;
    int i;
    (void) stack;

    start = 0;
    i = -1;
    left = size % dv;
    while(++i < dv)
    {
        stop = (size / dv) * (i + 1) - 1;
        if (i == dv - 1)
            stop = size -1;
        ft_push_chunk(&stack, start, stop);
        start = stop + 1;
    }
    size = hubsize(stack->b);
}



