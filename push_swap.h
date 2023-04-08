/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:39:17 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/08 01:12:05 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_hub
{
    int data;
    int position;
    struct s_hub *next;
}   t_hub;

typedef struct s_data
{
	t_hub	*a;
	t_hub	*b;
}	t_data;

// int     ft_strncmp(char *dst, char *src, size_t n);
int    get_nlocation(t_hub *stack, size_t size, int pos);
void    test(t_hub **st, int start, int finish);
void	ft_lstaddback(t_hub **stack, t_hub *newnode);
void	ft_sort_all_args(size_t size, t_data *stack);
void    ft_reverse_rotate_b(t_data *stack);
void 	ft_reverse_rotate_a(t_data *stack);
void    ft_lst_dellast(t_hub **stack_a);
void    ft_sort_5_args(t_data   *stack);
void   *node_befoor_last(t_hub *stack);
void    ft_sort_4_args(t_data *stack);
void    ft_sort_3_arg(t_data *stack);
void    ft_push_to_b(t_data	**stack);
void    ft_push_to_a(t_data **stack);
t_hub	*ft_lstnew(int nbr, int pos);
void    ft_rotate_a(t_data *stack);
void    ft_rotate_b(t_data *stack);
int     duplicate(t_hub *stack_a);
size_t  ft_lstsize(t_data *stack);
int     ft_atoi(const char *str);
t_hub	*ft_lstlast(t_hub *stack);
int     is_sorted(t_hub *stack);
int		ft_atoi(const char *str);
void    swap_a(t_data *stack);
int		checks_error(char *str);
size_t  hubsize(t_hub *stack);
void    swap_b(t_data *stack);
int		ft_isdigit(int c);



# endif
