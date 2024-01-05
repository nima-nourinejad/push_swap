/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command_list_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:42:12 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 15:20:50 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

t_command	*ft_command_node_bonus(char command[4])
{
	t_command	*node;

	node = malloc(sizeof(t_command));
	if (!node)
		return (0);
	node->com[0] = command[0];
	node->com[1] = command[1];
	node->com[2] = command[2];
	node->com[3] = command[3];
	node->next = 0;
	return (node);
}

int	ft_command_maker_bonus(char command[4], t_command	**full_command)
{
	t_command	*node;
	t_command	*temp;

	if (*full_command == NULL)
	{
		node = ft_command_node_bonus(command);
		if (!node)
			return (-1);
		*full_command = node;
	}
	else
	{
		node = ft_command_node_bonus(command);
		if (!node)
			return (-1);
		temp = *full_command;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (0);
}
