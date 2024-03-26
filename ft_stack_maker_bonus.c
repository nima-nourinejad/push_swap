/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_maker_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:54:33 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/30 13:01:47 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

static int	ft_node_free_bonus(t_full_stack	**full, t_stack *a)
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

int	ft_stack_maker_bonus(int *array, int size, t_full_stack	**full)
{
	t_stack	*first;
	t_stack	*temp;
	t_stack	*node;
	int		i;

	*full = malloc(sizeof(t_full_stack));
	if (!*full)
		return (-1);
	node = ft_newnode_bonus(array[0]);
	if (!node)
		return (ft_node_free_bonus(full, 0));
	first = node;
	i = 1;
	while (i < size)
	{
		temp = ft_newnode_bonus(array[i]);
		if (!temp)
			return (ft_node_free_bonus(full, first));
		node->next = temp;
		node = temp;
		i++;
	}
	(*full)->stack_a = first;
	(*full)->stack_b = 0;
	return (0);
}
