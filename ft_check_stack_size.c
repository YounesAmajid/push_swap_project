/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack_size.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:48:35 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/19 21:30:41 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int check_pos_on_top(t_hub *stack, int first, int final, size_t size)
{
    t_hub *head;
    int   closest;
    size_t   i;

    closest = -1;
    i = 1;
    head = stack;
    size = hubsize(stack);
    while (head && i <= (size / 2))
    {
        if (head->position >= first && head->position <= final)
        {
            closest = i;
            break ;
        }
        i++;
        head = head->next;
    }
    if (closest < 0)
        return (size - i + 1);
    return (closest);
}

int check_pos_on_buttom(t_hub *stack, int first, int final, size_t size)
{
    t_hub *head;
    int   closest;
    size_t   i;
    int j;

    closest = -1;
    i = (hubsize(stack) / 2) + 1;
    head = stack;
    while (head && i <= size)
        head = head->next;
    j = 1;
    size = hubsize(stack);
    while (head && i <= (size / 2))
    {
        if (head->position >= first && head->position <= final)
            closest = j;
            // printf("closest--->%d\n", closest);
        i ++;
        head = head->next;
        j++;
    }
    return ((size / 2) - closest);
}

// void     test(t_hub **st, int start, int finish)
// {
//     size_t size = hubsize((*st));
//     printf("*****\n");
//     printf("top--->%d\n", check_pos_on_top((*st), start, finish, size));
//     printf("-----------**********************------------\n\n");
//     printf("buttom--->%d\n", check_pos_on_buttom((*st), start, finish, size));
//     printf("*****\n");
// }

// void    ft_push_chunks(t_data *stack, int start, int finish, int n_chunks)
// {
//     size_t  size;
//     int  top;
//     int  buttom;
//     t_hub   *node;
//     int i;

