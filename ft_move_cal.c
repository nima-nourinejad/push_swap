/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_cal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:37:09 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 16:52:35 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_max2(int a, int b)
{
	int	max;

	max = b;
	if (a >= b)
		max = a;
	return (max);
}

static int	ft_min4(a, b, c, d)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (d < min)
		min = d;
	return (min);
}

static int	ft_find_best_move(int ra, int rb, int rra, int rrb)
{
	int	min;

	min = ft_min4(ft_max2(ra, rb), ft_max2(rra, rrb), (ra + rrb), (rb + rra));
	if (min == ft_max2(ra, rb) && ft_max2(ra, rb) == ra)
		return (1);
	if (min == ft_max2(ra, rb) && ft_max2(ra, rb) == rb)
		return (2);
	if (min == ft_max2(rra, rrb) && ft_max2(rra, rrb) == rra)
		return (3);
	if (min == ft_max2(rra, rrb) && ft_max2(rra, rrb) == rrb)
		return (4);
	if (min == (ra + rrb))
		return (5);
	else
		return (6);
}

static void	ft_cal(t_move *move, t_full_stack **full, int n)
{
	int		min;
	int		max;
	int		min_n;
	int		max_n;
	int		bestmove;

	ft_move_zero(move);
	move->ra = ft_cal_rotate_a_num(full, n);
	move->rra = ft_size_a(full) - move->ra;
	min = ft_min_b(full);
	max = ft_max_b(full);
	min_n = min;
	max_n = max;
	if (n < max && n > min)
	{
		min_n = ft_min_n_b(full, n, min);
		max_n = ft_max_n_b(full, n, max);
	}
	move->rb = ft_find_rb(full, min_n, max_n);
	move->rrb = ft_size_b(full) - move->rb;
	bestmove = ft_find_best_move(move->ra, move->rb, move->rra, move->rrb);
	ft_update_move(move, bestmove);
}

void	ft_min_move(t_full_stack **full)
{
	int		n;
	int		min_move;
	t_move	move;
	t_stack	*temp;

	temp = (*full)->stack_a;
	n = temp->num;
	ft_cal(&move, full, n);
	min_move = move.n_move;
	temp = temp->next;
	while (temp)
	{
		ft_cal(&move, full, temp->num);
		if (move.n_move < min_move)
		{
			n = temp->num;
			min_move = move.n_move;
		}
		temp = temp->next;
	}
	ft_cal(&move, full, n);
	ft_move(full, move);
}
