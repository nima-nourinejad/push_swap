/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_full_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:18:18 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 14:33:08 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_full_free(t_full_stack *full, int *array)
{
	t_stack	*temp;
	t_stack	*a;
	t_stack	*b;

	if (full)
	{
		a = full->stack_a;
		b = full->stack_b;
		while (a)
		{
			temp = a->next;
			free(a);
			a = temp;
		}
		while (b)
		{
			temp = b->next;
			free(b);
			b = temp;
		}
		free(full);
	}
	if (array)
		free(array);
	return (0);
}

int	ft_full_free_error(t_full_stack *full, int *array)
{
	ft_full_free(full, array);
	ft_putstr_fd("Error\n", 2);
	return (0);
}
