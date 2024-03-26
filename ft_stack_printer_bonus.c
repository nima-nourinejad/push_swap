/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_printer_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:02:33 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/31 10:52:15 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

void	ft_stack_printer_bonus(t_full_stack *full)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = full->stack_a;
	stack_b = full->stack_b;
	ft_printf("\nStack A\t\t\t\tStack B\n");
	while (stack_a || stack_b)
	{
		if (stack_a)
		{
			ft_printf("%d\t\t\t\t", (stack_a)->num);
			stack_a = (stack_a)->next;
		}
		else
			ft_printf("-\t\t\t\t");
		if (stack_b)
		{
			ft_printf("%d\n", (stack_b)->num);
			stack_b = (stack_b)->next;
		}
		else
			ft_printf("-\n");
	}
	ft_printf("\n");
}
