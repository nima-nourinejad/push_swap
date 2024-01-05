/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:10:27 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 15:24:01 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap_aa(t_full_stack **full)
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

void	ft_swap_a(t_full_stack **full)
{
	ft_swap_aa(full);
	ft_printf("sa\n");
}

static void	ft_swap_bb(t_full_stack **full)
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

void	ft_swap_b(t_full_stack **full)
{
	ft_swap_bb(full);
	ft_printf("sb\n");
}

void	ft_swap_ab(t_full_stack **full)
{
	ft_swap_aa(full);
	ft_swap_bb(full);
	ft_printf("ss\n");
}
