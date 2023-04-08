/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack_size.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:48:35 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/08 17:16:29 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int closest_on_top(t_hub *a, int first, int final, size_t size)
{
    t_hub *head;
    int   closest;
    int   i;

    closest = -1;
    i = 1;
    head = a;
    while (head && i <= (size / 2))
    {
        if (head->position >= first && head->position <= final)
            closest = i;
        i++;
        head = head->next;
    }
    if (closest < 0)
        return (size - i + 1);
    return (closest);
}

int closest_on_buttom(t_hub *a, int first, int final, size_t size)
{
    t_hub *head;
    int   closest;
    int   i;
    int j;

    closest = -1;
    i = (hubsize(a) / 2) + 1;
    head = a;
    while (head && i <= hubsize(head))
        head = head->next;
    j = 1;
    while (head && i > (size / 2))
    {
        if (head->position >= first && head->position <= final)
            closest = j;
        i ++;
        j++;
        head = head->next;
    }
    if (closest < 0)
        return ((size - j) + 1);
    // printf("closeest_return---->%d\n", closest);
    return (closest);
}

void     test(t_hub **st, int start, int finish)
{
    size_t size = hubsize((*st));
    printf("*****\n");
    printf("%d\n", closest_on_top((*st), start, finish, size));
    printf("-----------**********************------------\n\n");
    printf("%d\n", closest_on_buttom((*st), start, finish, size));
    printf("*****\n");
}

//void    ft_push_chunks(t_data **st, int start, int finish)
//{
//    int tb;
//    size_t  size;
//    t_hub   *node;
//
//    node = (*st)->a;
//    while (start <= finish)
//    {
//        size = hubsize(node);
//        tb = get_nlocation(node, size, start ++);
//
//        //tb = closest()
//        //while (tb == 1 && node->position <= (size / 2))
//        //    ft_reverse_rotate_a(*st);
//    }
//}
//
//void    ft_check_chunks_size(t_data  *stack, size_t size, int n_of_chunks)
//{
//    int i;
//    int first;
//    int final;
//
//    first = 0;
//    i = 1;
//    while (i <= n_of_chunks)
//    {
//        if (i == n_of_chunks)
//        {
//            n_of_chunks = size;
//            ft_push_chunks(stack, first, final);
//        }
//        else
//        {
//            size -= (((size / n_of_chunks) * i) - 2);
//            ft_push_chunks(stack, first, final);
//            first = final + 1;
//        }
//    i++;
//    }
//
//}