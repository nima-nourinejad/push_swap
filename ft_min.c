/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:55:26 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 16:30:04 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_b(t_full_stack **full)
{
	t_stack	*temp;
	int		min;

	temp = (*full)->stack_b;
	min = INT_MAX;
	if (temp)
	{
		min = temp->num;
		temp = temp->next;
		while (temp)
		{
			if (temp->num < min)
				min = temp->num;
			temp = temp->next;
		}
	}
	return (min);
}

int	ft_min_n_b(t_full_stack **full, int n, int min)
{
	t_stack	*temp;
	int		min_n;

	temp = (*full)->stack_b;
	min_n = min;
	while (temp)
	{
		if (temp->num > min_n && temp->num < n)
			min_n = temp->num;
		temp = temp->next;
	}
	return (min_n);
}
