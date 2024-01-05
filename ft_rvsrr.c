/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rvsrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:49:31 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/28 15:30:26 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rvsrr_a(t_full_stack **full, int index, int size)
{
	int		r;
	int		rr;
	t_stack	*temp;

	r = 0;
	rr = 0;
	temp = (*full)->stack_a;
	while (temp->num != index)
	{
		temp = temp->next;
		r++;
	}
	rr = size - r;
	if (r < rr)
		return (0);
	return (1);
}

int	ft_rvsrr_b(t_full_stack **full, int index, int size)
{
	int		r;
	int		rr;
	t_stack	*temp;

	r = 0;
	rr = 0;
	temp = (*full)->stack_b;
	while (temp->num != index)
	{
		temp = temp->next;
		r++;
	}
	rr = size - r;
	if (r < rr)
		return (0);
	return (1);
}
