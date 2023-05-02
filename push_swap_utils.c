/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:52:39 by yamajid           #+#    #+#             */
/*   Updated: 2023/05/02 15:41:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

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

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	if_long(long res, int sign)
{
	if ((res > 0 && sign < 0) || (res < 0 && sign > 0))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return ((int )res);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (ft_strlen(str) >= 11)
		return (write(1, "Error\n", 6), exit(1), 0);
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10;
		result += *str - 48;
		str++;
	}
	result = result * sign;
	return (if_long(result, sign));
}
