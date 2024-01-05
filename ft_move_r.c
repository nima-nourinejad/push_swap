/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:29:56 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 15:29:57 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_rr(t_full_stack **full, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_rotate_ab(full);
		i++;
	}
}

void	ft_move_ra(t_full_stack **full, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_rotate_a(full);
		i++;
	}
}

void	ft_move_rb(t_full_stack **full, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_rotate_b(full);
		i++;
	}
}
