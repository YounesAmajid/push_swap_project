
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

int main (int argc, char **argv)
{
    t_hub *tmp;
    // t_hub *tmp2;
	t_data stack;
    int i;
    int nbr;

    stack.a = NULL;
    stack.b = NULL;
    if (argc <= 2)
        return (1);
    i = 1;
    while (i < argc)
    {
        if (checks_error(argv[i]) == 0)
            return (1);
        nbr = ft_atoi(argv[i]);
        ft_lstaddback(&stack.a, ft_lstnew(nbr, 0));
        i++;
    }
    if(duplicate(stack.a) == 1 || is_sorted(stack.a) == 1)
		return(1);
    tmp = stack.a;
    // printf("--------stack_before------------\n");
    // while (tmp)
    // {
    //     printf("num = %d ---> pos : %d\n",tmp->data, tmp->position);
    //     tmp = tmp->next;
    // }
    //test(&stack, 0, 19);
    // printf("--------stack_B------------\n");
    ft_sort_all_args(hubsize(stack.a), &stack);
    //test(&stack.a, 0, 10);
    // while (tmp2)
    // {
    //     printf("num = %d  ---> pos : %d\n",tmp2->data, tmp2->position);
    //     tmp2 = tmp2->next;
    // }
    // printf("--------stack_A------------\n");
    // while (stack.a)
    // {
    //     printf("num_a = %d ----- pos= %d\n",stack.a->data, stack.a->position);
    //     stack.a = stack.a->next;
    // }
    // printf("--------------stack_B---------------------------\n");
    // tmp2 = stack.b;
    // while (tmp2)
    // {
    //     printf("num = %d ---  pos=   %d\n",tmp2->data, tmp2->position);
    //     tmp2 = tmp2->next;
    // }
   
}


