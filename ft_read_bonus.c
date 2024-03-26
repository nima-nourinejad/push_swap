/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:09:01 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 15:03:42 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

static int	ft_free_command_bonus(t_command	*full_command)
{
	t_command	*temp;
	t_command	*next;

	temp = full_command;
	while (temp)
	{
		next = temp->next;
		free (temp);
		temp = next;
	}
	return (-1);
}

static int	ft_full_read_bonus(t_command	**full_command)
{
	int			i;
	char		buffer[2];
	char		command[4];

	i = 0;
	*full_command = NULL;
	ft_memset(command, 0, 5);
	ft_memset(buffer, 0, 2);
	while (read(0, buffer, 1))
	{
		if (buffer[0] != '\n')
			command[i++] = buffer[0];
		else
		{
			if (ft_command_check_bonus(command))
				return (ft_free_command_bonus(*full_command));
			if (ft_command_maker_bonus(command, full_command) == -1)
				return (ft_free_command_bonus(*full_command));
			ft_memset(command, 0, 4);
			i = 0;
		}
	}
	if (i > 0)
		return (ft_free_command_bonus(*full_command));
	return (0);
}

int	ft_read_run_bonus(t_full_stack	**full)
{
	t_command	*full_command;
	t_command	*temp;

	full_command = NULL;
	if (ft_full_read_bonus(&full_command) == -1)
		return (-1);
	temp = full_command;
	while (full_command)
	{
		if (ft_run_command_bonus(full, full_command->com))
			return (ft_free_command_bonus(full_command));
		full_command = full_command->next;
	}
	ft_free_command_bonus(temp);
	return (0);
}
