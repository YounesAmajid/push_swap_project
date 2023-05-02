/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:06:12 by yamajid           #+#    #+#             */
/*   Updated: 2023/05/02 15:33:28 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strncmp(char *dst, char *src, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((dst[i] || src[i]) && i < n)
	{
		if (dst[i] != src[i])
			return (dst[i] - src[i]);
		i++;
	}
	return (0);
}

int	all_spaces(char *s)
{
	while (*s)
	{
		if (*s != ' ')
			return (0);
		s++;
	}
	return (1);
}

size_t	hubsize(t_hub *stack)
{
	t_hub	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	checks_error(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i][0] != '-' && str[i][0] != '+' && !ft_isdigit(str[i][0]))
			return (0);
		j = 1;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
