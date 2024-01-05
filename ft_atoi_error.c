/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:33:54 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/28 15:36:01 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check(char *s)
{
	int	digit;
	int	temp;
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		digit = s[i] - 48;
		temp = (INT_MAX - digit) / 10;
		if (temp < n)
			return (1);
		n = 10 * n + digit;
		i++;
	}
	return (0);
}

static int	ft_strnbr(char *s)
{
	int	digit;
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		digit = s[i] - 48;
		n = n * 10 + digit;
		i++;
	}
	return (n);
}

int	ft_atoi_error(char *str, int *error)
{
	int		sign;
	int		n;

	sign = 1;
	*error = 0;
	if (ft_strncmp(str, "-2147483648", 12) == 0)
		return (-2147483648);
	if (*str == '+' || *str == '-' )
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (*str == '\0')
	{
		*error = 1;
		return (0);
	}
	if (ft_check(str) == 1)
	{
		*error = 1;
		return (0);
	}
	n = ft_strnbr(str) * sign;
	return (n);
}
