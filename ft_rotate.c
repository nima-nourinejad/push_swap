/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:23:27 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/19 10:19:43 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_aa(t_full_stack **full)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*last;

	if (!((*full)->stack_a))
		return ;
	first = (*full)->stack_a;
	second = ((*full)->stack_a)->next;
	last = (*full)->stack_a;
	while (last->next)
		last = last->next;
	if (last == first)
		return ;
	last->next = first;
	first->next = 0;
	(*full)->stack_a = second;
}

void	ft_rotate_bb(t_full_stack **full)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*last;

	if (!((*full)->stack_b))
		return ;
	first = (*full)->stack_b;
	second = ((*full)->stack_b)->next;
	last = (*full)->stack_b;
	while (last->next)
		last = last->next;
	if (last == first)
		return ;
	last->next = first;
	first->next = 0;
	(*full)->stack_b = second;
}

void	ft_rotate_a(t_full_stack **full)
{
	ft_rotate_aa(full);
	ft_printf("ra\n");
}

void	ft_rotate_b(t_full_stack **full)
{
	ft_rotate_bb(full);
	ft_printf("rb\n");
}

void	ft_rotate_ab(t_full_stack **full)
{
	ft_rotate_aa(full);
	ft_rotate_bb(full);
	ft_printf("rr\n");
}
