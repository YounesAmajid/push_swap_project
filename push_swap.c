
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:52:20 by yamajid           #+#    #+#             */
/*   Updated: 2023/03/24 22:02:30 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// void    size_filter(size_t size, t_data *stack)
// {

//     if (size == 2)
//         swap_a(stack->a);
//     // if (size == 3)
//     //     sort_4();
//     // if (size == 4)
//     //     sort_4();
// }

int main (int argc, char **argv)
{
    t_hub *tmp;
    t_hub *tmp2;
	t_hub  *stack;
    int i;
    int nbr;

    stack = NULL;
    stack = NULL;

    if (argc <= 2)
        return (1);
    i = 1;
    while (i < argc)
    {
        if (checks_error(argv[i]) == 0)
            return (1);
        nbr = ft_atoi(argv[i]);
        ft_lstaddback(&stack, ft_lstnew(nbr, 0));
        i++;
    }
    if(duplicate(stack) == 1 || is_sorted(stack) == 1)
		return(1);
    // tmp = stack.a;
    // printf("--------stack_before------------\n");
    // while (tmp)
    // {
    //     printf("num = %d ---> pos : %d\n",tmp->data, tmp->position);
    //     tmp = tmp->next;
    // }
    test(&stack, 0, 19);
    // tmp2 = stack.b;
    // printf("--------stack_B------------\n");
    // while (tmp2)
    // {
    //     printf("num = %d  ---> pos : %d\n",tmp2->data, tmp2->position);
    //     tmp2 = tmp2->next;
    // }
    // printf("--------stack_A------------\n");
    // while (stack.a)
    // {
    //     printf("num = %d  ---> pos : %d\n",stack.a->data, stack.a->position);
    //     stack.a = stack.a->next;
    // }
   
}


