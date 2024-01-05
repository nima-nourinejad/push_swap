/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numtop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:49:56 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/28 15:12:59 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_numtop_a(t_full_stack **full, int num)
{
	int	size_a;
	int	move;

	size_a = ft_size_a(full);
	move = ft_rvsrr_a(full, num, size_a);
	if (move == 0)
	{
		while (((*full)->stack_a)->num != num)
			ft_rotate_a(full);
	}
	else
	{
		while (((*full)->stack_a)->num != num)
			ft_reverse_rotate_a(full);
	}
}

void	ft_numtop_b(t_full_stack **full, int num)
{
	int	size_b;
	int	move;

	size_b = ft_size_b(full);
	move = ft_rvsrr_b(full, num, size_b);
	if (move == 0)
	{
		while (((*full)->stack_b)->num != num)
			ft_rotate_b(full);
	}
	else
	{
		while (((*full)->stack_b)->num != num)
			ft_reverse_rotate_b(full);
	}
}
