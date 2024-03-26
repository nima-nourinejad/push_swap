/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:45:49 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 15:00:49 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_main_sort(t_full_stack **full, int size)
{
	int		t;
	int		max;

	if (size <= 3)
		return (ft_three_sort(full, size));
	ft_push3_sort_b(full, size);
	if (size > 5)
	{
		t = size - 3;
		while (t != 3)
		{
			ft_min_move(full);
			t--;
		}
	}
	ft_three_sort(full, 3);
	max = ft_max_b(full);
	ft_numtop_b(full, max);
	ft_final_insert(full);
}
