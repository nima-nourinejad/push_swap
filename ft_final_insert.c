/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:56:36 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/28 15:19:49 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_insert(t_full_stack **full, int step)
{
	if ((*full)->stack_b)
	{
		while (((*full)->stack_b)->num > step)
		{
			ft_push_a(full);
			if ((*full)->stack_b == 0)
				break ;
		}
	}
	ft_numtop_a(full, step);
}

void	ft_final_insert(t_full_stack **full)
{
	t_stack	*a;
	int		mina;
	int		mida;
	int		maxa;

	a = (*full)->stack_a;
	mina = ((*full)->stack_a)->num;
	mida = (a->next)->num;
	maxa = ft_last(a)->num;
	ft_insert(full, maxa);
	ft_insert(full, mida);
	ft_insert(full, mina);
	while ((*full)->stack_b)
		ft_push_a(full);
}
