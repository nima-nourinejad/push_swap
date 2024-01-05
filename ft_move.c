/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:18:04 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 15:41:07 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move(t_full_stack **full, t_move move)
{
	ft_move_rr(full, move.rr);
	ft_move_ra(full, move.ra);
	ft_move_rb(full, move.rb);
	ft_move_rrr(full, move.rrr);
	ft_move_rra(full, move.rra);
	ft_move_rrb(full, move.rrb);
	ft_push_b(full);
}

void	ft_move_zero(t_move *move)
{
	move->ra = 0;
	move->rra = 0;
	move->rb = 0;
	move->rrb = 0;
	move->rr = 0;
	move->rrr = 0;
	move->n_move = 0;
}
