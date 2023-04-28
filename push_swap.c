
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

void	add_index(t_hub *stack)
{
	int	i;

	i = -1;
	while (stack != NULL)
	{
		stack->index = ++i;
		stack = stack->next;
	}
}

void	f(void)
{
	system("leaks push_swap");
}

void	ft_lstdelone(t_hub *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	ft_lstclear(t_hub **lst)
{
	t_hub	*tmp;

	if (!lst || !(*lst))
		return ;
	tmp = *lst;
	while (*lst)
	{
		*lst = (*lst)->next;
		ft_lstdelone(tmp);
		tmp = *lst;
	}
}

int	main(int argc, char **argv)
{
	t_data	stack;
	int		i;
	int		nbr;
	char	*str;

	// atexit(f);
	stack.a = NULL;
	stack.b = NULL;
	if (argc <= 2)
		return (1);
	i = 1;
	while (argv[i])
	{
		// str = ft_strjoin(str, argv[i]);
		if (checks_error(argv[i]) == 0)
			return (1);
		nbr = ft_atoi(argv[i]);
		ft_lstaddback(&stack.a, ft_lstnew(nbr, 0));
		i++;
	}
	// printf("%s", str);
	if (duplicate(stack.a) == 1 || is_sorted(stack.a) == 1)
		return (1);
	add_index(stack.a);
	ft_sort_all_args(hubsize(stack.a), &stack);
	ft_lstclear(&stack.a);
	ft_lstclear(&stack.b);
}
