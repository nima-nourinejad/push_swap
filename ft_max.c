/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:38:56 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 16:23:08 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_b(t_full_stack **full)
{
	t_stack	*temp;
	int		max;

	temp = (*full)->stack_b;
	max = INT_MIN;
	if (temp)
	{
		max = temp->num;
		temp = temp->next;
		while (temp)
		{
			if (temp->num > max)
				max = temp->num;
			temp = temp->next;
		}
	}
	return (max);
}

int	ft_max_n_b(t_full_stack **full, int n, int max)
{
	t_stack	*temp;
	int		max_n;

	temp = (*full)->stack_b;
	max_n = max;
	while (temp)
	{
		if (temp->num < max_n && temp->num > n)
			max_n = temp->num;
		temp = temp->next;
	}
	return (max_n);
}
