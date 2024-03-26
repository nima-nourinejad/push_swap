/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_maker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:54:33 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/30 10:45:23 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_node_free(t_full_stack	**full, t_stack *a)
{
	t_stack	*temp;

	if (*full)
		free(*full);
	while (a)
	{
		temp = a->next;
		free(a);
		a = temp;
	}
	return (-1);
}

int	ft_stack_maker(int *array, int size, t_full_stack	**full)
{
	t_stack	*first;
	t_stack	*temp;
	t_stack	*node;
	int		i;

	*full = malloc(sizeof(t_full_stack));
	if (!*full)
		return (-1);
	node = ft_newnode(array[0]);
	if (!node)
		return (ft_node_free(full, 0));
	first = node;
	i = 1;
	while (i < size)
	{
		temp = ft_newnode(array[i]);
		if (!temp)
			return (ft_node_free(full, first));
		node->next = temp;
		node = temp;
		i++;
	}
	(*full)->stack_a = first;
	(*full)->stack_b = 0;
	return (0);
}
