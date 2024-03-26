/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:16:11 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/31 12:26:02 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

void	ft_push_b_bonus(t_full_stack **full)
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
}

void	ft_push_a_bonus(t_full_stack **full)
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
}
