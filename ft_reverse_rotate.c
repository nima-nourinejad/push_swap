/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:46:18 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 13:33:09 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_aa(t_full_stack **full)
{
	t_stack	*before_last;
	t_stack	*last;
	t_stack	*temp;

	if (!((*full)->stack_a))
		return ;
	temp = (*full)->stack_a;
	if (temp->next == 0)
		return ;
	while ((temp->next)->next)
		temp = temp->next;
	before_last = temp;
	last = temp->next;
	if (last == (*full)->stack_a)
		return ;
	before_last->next = 0;
	last->next = (*full)->stack_a;
	(*full)->stack_a = last;
}

void	ft_reverse_rotate_bb(t_full_stack **full)
{
	t_stack	*before_last;
	t_stack	*last;
	t_stack	*temp;

	if (!((*full)->stack_b))
		return ;
	temp = (*full)->stack_b;
	if (temp->next == 0)
		return ;
	while ((temp->next)->next)
		temp = temp->next;
	before_last = temp;
	last = temp->next;
	if (last == (*full)->stack_b)
		return ;
	before_last->next = 0;
	last->next = (*full)->stack_b;
	(*full)->stack_b = last;
}

void	ft_reverse_rotate_a(t_full_stack **full)
{
	ft_reverse_rotate_aa(full);
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_full_stack **full)
{
	ft_reverse_rotate_bb(full);
	ft_printf("rrb\n");
}

void	ft_reverse_rotate_ab(t_full_stack **full)
{
	ft_reverse_rotate_bb(full);
	ft_reverse_rotate_aa(full);
	ft_printf("rrr\n");
}
