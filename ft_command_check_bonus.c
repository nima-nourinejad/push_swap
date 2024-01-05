/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command_check_bonsu.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:58:18 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 12:01:54 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

int	ft_command_check_bonus(char *command)
{
	if (ft_strncmp(command, "ra", 3) == 0)
		return (0);
	else if (ft_strncmp(command, "rb", 3) == 0)
		return (0);
	else if (ft_strncmp(command, "rr", 3) == 0)
		return (0);
	else if (ft_strncmp(command, "rra", 4) == 0)
		return (0);
	else if (ft_strncmp(command, "rrb", 4) == 0)
		return (0);
	else if (ft_strncmp(command, "rrr", 4) == 0)
		return (0);
	else if (ft_strncmp(command, "sa", 3) == 0)
		return (0);
	else if (ft_strncmp(command, "sb", 3) == 0)
		return (0);
	else if (ft_strncmp(command, "ss", 3) == 0)
		return (0);
	else if (ft_strncmp(command, "pa", 3) == 0)
		return (0);
	else if (ft_strncmp(command, "pb", 3) == 0)
		return (0);
	return (1);
}
