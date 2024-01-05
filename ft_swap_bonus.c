/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:10:27 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 15:24:12 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

void	ft_swap_a_bonus(t_full_stack **full)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = (*full)->stack_a;
	if (!first)
		return ;
	second = first->next;
	if (!second)
		return ;
	third = second->next;
	(*full)->stack_a = second;
	second->next = first;
	first->next = third;
}

void	ft_swap_b_bonus(t_full_stack **full)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = (*full)->stack_b;
	if (!first)
		return ;
	second = first->next;
	if (!second)
		return ;
	third = second->next;
	(*full)->stack_b = second;
	second->next = first;
	first->next = third;
}

void	ft_swap_ab_bonus(t_full_stack **full)
{
	ft_swap_a_bonus(full);
	ft_swap_b_bonus(full);
}
