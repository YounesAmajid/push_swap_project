/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:52:20 by yamajid           #+#    #+#             */
/*   Updated: 2023/05/02 15:33:04 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_join_split(char **av)
{
	int		i;
	char	**ptr;
	char	*str;

	str = NULL;
	i = -1;
	while (av[++i])
	{
		if (ft_strncmp(av[i], "", 5) == 0 || all_spaces(av[i]))
			return (free(str), NULL);
		str = ft_strjoin(str, av[i]);
	}
	ptr = ft_split(str, ' ');
	return (free(str), ptr);
}

int	ft_sort(t_data *stack, char **ptr)
{
	int	i;

	i = 0;
	while (ptr[++i])
		ft_lstaddback(&stack->a, ft_lstnew(ft_atoi(ptr[i]), 0));
	if (duplicate(stack->a) == 1)
		return (write(1, "Error\n", 6), ft_lstclear(&stack->a),
			ft_lstclear(&stack->a), free_arr(ptr), 1);
	if (is_sorted(stack->a) == 1)
		return (ft_lstclear(&stack->a), ft_lstclear(&stack->a), free_arr(ptr),
			1);
	return (1);
}

int	main(int argc, char **argv)
{
	t_data	stack;
	int		i;
	char	**ptr;

	stack.a = NULL;
	stack.b = NULL;
	if (argc < 2)
		return (write(1, "Error\n", 6), 1);
	ptr = get_join_split(++argv);
	if (!ptr)
		return (write(1, "Error\n", 6), 1);
	if (checks_error(ptr) == 0)
		return (write(1, "Error\n", 6), free_arr(ptr), 1);
	i = -1;
	ft_sort(&stack, ptr);
	add_index(stack.a);
	ft_sort_all_args(hubsize(stack.a), &stack);
	ft_lstclear(&stack.a);
	ft_lstclear(&stack.b);
	free_arr(ptr);
	return (0);
}
