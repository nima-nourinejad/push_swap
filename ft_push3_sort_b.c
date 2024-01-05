/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push3_sort_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:42:07 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 10:50:02 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push3_sort_b(t_full_stack **full, int size)
{
	int	t;
	int	i;

	if (size == 4 || size == 5)
		t = size - 3;
	else
		t = 3;
	i = 0;
	while (i < t)
	{
		ft_push_b(full);
		i++;
	}
	ft_three_sort_b(full, t);
}
