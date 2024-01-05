/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:33:48 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 15:35:03 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_rrr(t_full_stack **full, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_reverse_rotate_ab(full);
		i++;
	}
}

void	ft_move_rra(t_full_stack **full, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_reverse_rotate_a(full);
		i++;
	}
}

void	ft_move_rrb(t_full_stack **full, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_reverse_rotate_b(full);
		i++;
	}
}
