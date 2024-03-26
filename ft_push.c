/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:16:11 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/31 12:27:34 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_full_stack **full)
{
	t_stack	*a;
	t_stack	*b;

	a = (*full)->stack_a;
	b = (*full)->stack_b;
	if (!a)
		return ;
	(*full)->stack_a = a->next;
	(*full)->stack_b = a;
	a->next = b;
	ft_printf("pb\n");
}

void	ft_push_a(t_full_stack **full)
{
	t_stack	*a;
	t_stack	*b;

	a = (*full)->stack_a;
	b = (*full)->stack_b;
	if (!((*full)->stack_b))
		return ;
	(*full)->stack_b = b->next;
	(*full)->stack_a = b;
	b->next = a;
	ft_printf("pa\n");
}
