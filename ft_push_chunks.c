/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_chunks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 01:13:39 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/19 21:31:33 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_push_chunks(t_data *stack, int dv, size_t  size)
{
    int  top;
    int  buttom;
    int start;
    int finish;
    int i;
    size_t j;
    t_hub   *node;
    
    size = hubsize(stack->a);
    j = size;
    node = stack->a;
    i = 1;
    start = 0;
    while (i <= dv)
    {
        // if (i == dv)
        // {
        //     start = 0;
        //     while (1)
        //     {
        //         printf("start_value--->%d\n", start);
        //         printf("finish_value--->%d\n", finish);
        //         if (stack)
        //         ft_push_to_b(&stack);
        //         ft_rotate_b(stack);
        //     }
        // }
        finish = ((j / dv) * i) - 1;
        while (start <= finish)
        {
            top = 1;
            buttom = 1;
            top = check_pos_on_top(stack->a, start, finish, size);
            buttom = check_pos_on_buttom(stack->a, start, finish, size);
            if (top == buttom)
            {
                while ((stack->a->position <= start && stack->a->position >= finish))
                {
                    ft_reverse_rotate_a(stack);
                    // if ((stack->a->position >=start && stack->a->position <= finish))
                    //     ft_push_to_b(&stack);
                }
                // printf("here\n");
                ft_push_to_b(&stack);

            }
            if (buttom < top)
            {
                while ((stack->a->position <= start && stack->a->position >= finish))
                {
                    ft_rotate_a(stack);
                    // if ((stack->a->position >= start && stack->a->position <= finish))
                    //     ft_push_to_b(&stack);
                    
                }
                ft_push_to_b(&stack);

            }
            else if (top < buttom)
            {
                while ((stack->a->position <= start && stack->a->position >= finish))
                {
                    ft_reverse_rotate_a(stack);
                    // if ((stack->a->position >= start && stack->a->position <= finish))
                }
                ft_push_to_b(&stack);
            }
            start++;
        }
        finish++;
        start = finish;
        i++;
    }
}
