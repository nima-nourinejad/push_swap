/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:59:41 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/28 15:38:05 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_size_a(t_full_stack **full)
{
	int		size;
	t_stack	*temp;

	size = 0;
	temp = (*full)->stack_a;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

int	ft_size_b(t_full_stack **full)
{
	int		size;
	t_stack	*temp;

	size = 0;
	temp = (*full)->stack_b;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
