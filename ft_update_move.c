/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:32:36 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/28 15:05:00 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_update_move123(t_move *move, int bestmove)
{
	if (bestmove == 1)
	{
		move->rr = move->rb;
		move->ra = move->ra - move->rb;
		move->rb = 0;
		move->rra = 0;
		move->rrb = 0;
	}
	if (bestmove == 2)
	{
		move->rr = move->ra;
		move->rb = move->rb - move->ra;
		move->ra = 0;
		move->rra = 0;
		move->rrb = 0;
	}
	if (bestmove == 3)
	{
		move->rrr = move->rrb;
		move->rra = move->rra - move->rrb;
		move->rrb = 0;
		move->ra = 0;
		move->rb = 0;
	}
}

static void	ft_update_move456(t_move *move, int bestmove)
{
	if (bestmove == 4)
	{
		move->rrr = move->rra;
		move->rrb = move->rrb - move->rra;
		move->rra = 0;
		move->ra = 0;
		move->rb = 0;
	}
	if (bestmove == 5)
	{
		move->rb = 0;
		move->rra = 0;
	}
	if (bestmove == 6)
	{
		move->ra = 0;
		move->rrb = 0;
	}
}

void	ft_update_move(t_move *move, int bestmove)
{
	if (bestmove < 4)
		ft_update_move123(move, bestmove);
	else
		ft_update_move456(move, bestmove);
	move->n_move = move->ra + move->rb
		+ move->rr + move->rra + move->rrb + move->rrr;
}
