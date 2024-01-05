/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_command_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 10:06:24 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 15:23:10 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

int	ft_run_command_bonus(t_full_stack	**full, char *command)
{
	if (ft_strncmp(command, "ra", 3) == 0)
		ft_rotate_a_bonus(full);
	else if (ft_strncmp(command, "rb", 3) == 0)
		ft_rotate_b_bonus(full);
	else if (ft_strncmp(command, "rr", 3) == 0)
		ft_rotate_ab_bonus(full);
	else if (ft_strncmp(command, "rra", 4) == 0)
		ft_reverse_rotate_a_bonus(full);
	else if (ft_strncmp(command, "rrb", 4) == 0)
		ft_reverse_rotate_b_bonus(full);
	else if (ft_strncmp(command, "rrr", 4) == 0)
		ft_reverse_rotate_ab_bonus(full);
	else if (ft_strncmp(command, "sa", 3) == 0)
		ft_swap_a_bonus(full);
	else if (ft_strncmp(command, "sb", 3) == 0)
		ft_swap_b_bonus(full);
	else if (ft_strncmp(command, "ss", 3) == 0)
		ft_swap_ab_bonus(full);
	else if (ft_strncmp(command, "pa", 3) == 0)
		ft_push_a_bonus(full);
	else if (ft_strncmp(command, "pb", 3) == 0)
		ft_push_b_bonus(full);
	else
		return (1);
	return (0);
}
