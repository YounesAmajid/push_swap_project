/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:39:17 by yamajid           #+#    #+#             */
/*   Updated: 2023/05/02 15:32:52 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_hub
{
	int				data;
	int				position;
	int				index;
	struct s_hub	*next;
}					t_hub;

typedef struct s_data
{
	t_hub			*a;
	t_hub			*b;
}					t_data;

int		check_pos_on_buttom(t_hub *stack, int first, int final,
			size_t size);
int		check_pos_on_top(t_hub *stack, int first, int final,
			size_t size);
int		ft_check_nm_pos(t_hub *stack, size_t size, int pos);
void	ft_get_chunks(t_data *stack, int dv, size_t size);
int		get_nlocation(t_hub *stack, size_t size, int pos);
void	ft_push_chunk(t_data **a, int start, int stop);
void	ft_sort_all_args(size_t size, t_data *stack);
int		get_closest(t_hub *b, int first, int second);
void	ft_lstaddback(t_hub **stack, t_hub *newnode);
int		ft_strncmp(char *dst, char *src, size_t n);
int		ft_sort(t_data *stack, char **ptr);
void	ft_reverse_rotate_a(t_data *stack);
void	ft_reverse_rotate_b(t_data *stack);
void	ft_push_back_to_a(t_data *stack);
char	*ft_strjoin(char *s1, char *s2);
void	ft_lst_dellast(t_hub **stack_a);
void	ft_sort_5_args(t_data *stack);
void	*node_before_last(t_hub *stack);
void	ft_sort_4_args(t_data *stack);
void	ft_sort_3_arg(t_data *stack);
void	ft_push_to_b(t_data **stack);
void	ft_push_to_a(t_data **stack);
t_hub	*ft_lstnew(int nbr, int pos);
char	**ft_split(char *s, char c);
char	**get_join_split(char **av);
void	ft_rotate_a(t_data *stack);
void	ft_rotate_b(t_data *stack);
size_t	ft_strlen(const char *str);
int		duplicate(t_hub *stack_a);
t_hub	*ft_lstlast(t_hub *stack);
void	ft_lstclear(t_hub **lst);
int		checks_error(char **str);
int		is_sorted(t_hub *stack);
void	add_index(t_hub *stack);
void	swap_a(t_data *stack);
size_t	hubsize(t_hub *stack);
void	swap_b(t_data *stack);
void	free_arr(char **arr);
int		all_spaces(char *s);
int		ft_atoi(char *str);
int		ft_isdigit(int c);

#endif
