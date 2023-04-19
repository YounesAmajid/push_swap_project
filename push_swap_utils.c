/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:52:39 by yamajid           #+#    #+#             */
/*   Updated: 2023/04/19 20:59:12 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
int	ft_strncmp(char *dst, char *src, size_t n)
{
	size_t			i;

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

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;

	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10;
		result += *str - 48;
		str++;
	}
	result = result * sign;
	return (result);
}

int checks_error(char *str)
{
    int i;

    i = 1;
    if (str[0] != '-' && str[0] != '+' && !ft_isdigit(str[0]))
        return (0);
	while(str[i])
	{
		if(!ft_isdigit(str[i]))
			return(0);
		i++;
	}	
	return (1);
}
