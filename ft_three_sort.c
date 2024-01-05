/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:32:00 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/20 10:58:19 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_2_sort(t_full_stack **full)
{
	t_stack	*first;
	t_stack	*second;

	first = (*full)->stack_a;
	second = first->next;
	if (first->num > second->num)
		ft_swap_a(full);
}

static void	ft_3_sort(t_full_stack **full)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = (*full)->stack_a;
	second = first->next;
	third = second->next;
	if (third->num < second->num && second->num < first->num)
	{
		ft_rotate_a(full);
		ft_swap_a(full);
	}
	if (second->num > third->num && third->num > first->num)
	{
		ft_reverse_rotate_a(full);
		ft_swap_a(full);
	}
	else if (second->num < first->num && first->num < third->num)
		ft_swap_a(full);
	else if (second->num > first->num && first->num > third->num)
		ft_reverse_rotate_a(full);
	else if (second->num < third->num && third->num < first->num)
		ft_rotate_a(full);
}

void	ft_three_sort(t_full_stack **full, int size)
{
	if (size == 2)
		ft_2_sort(full);
	if (size == 3)
		ft_3_sort(full);
}
