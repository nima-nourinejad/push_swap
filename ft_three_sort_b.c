/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_sort_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:13:25 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/26 13:07:51 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_2_sort(t_full_stack **full)
{
	t_stack	*first;
	t_stack	*second;

	first = (*full)->stack_b;
	second = first->next;
	if (first->num < second->num)
		ft_swap_b(full);
}

static void	ft_3_sort(t_full_stack **full)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = (*full)->stack_b;
	second = first->next;
	third = second->next;
	if (third->num > second->num && second->num > first->num)
	{
		ft_rotate_b(full);
		ft_swap_b(full);
	}
	if (second->num < third->num && third->num < first->num)
	{
		ft_reverse_rotate_b(full);
		ft_swap_b(full);
	}
	else if (second->num > first->num && first->num > third->num)
		ft_swap_b(full);
	else if (second->num < first->num && first->num < third->num)
		ft_reverse_rotate_b(full);
	else if (second->num > third->num && third->num > first->num)
		ft_rotate_b(full);
}

void	ft_three_sort_b(t_full_stack **full, int size)
{
	if (size == 2)
		ft_2_sort(full);
	if (size == 3)
		ft_3_sort(full);
}
