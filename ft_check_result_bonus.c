/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_result_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:43:39 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 15:18:59 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

static int	ft_check_bonus(t_full_stack **full, int argc, char **argv)
{
	int				*a_sorted;
	t_stack			*temp;
	t_stack			*temp_sorted;
	t_full_stack	*full_sorted;
	int				size;

	ft_array_maker_bonus(argc, argv, &a_sorted, &size);
	a_sorted = ft_bubble_sort_bonus(a_sorted, size);
	ft_stack_maker_bonus(a_sorted, size, &full_sorted);
	if (ft_size_a_bonus(full) != ft_size_a_bonus(&full_sorted))
		return (-1);
	temp = (*full)->stack_a;
	temp_sorted = full_sorted->stack_a;
	while (temp_sorted)
	{
		if (temp_sorted->num != temp->num)
		{
			ft_full_free_bonus(full_sorted, a_sorted);
			return (-1);
		}
		temp = temp->next;
		temp_sorted = temp_sorted->next;
	}
	ft_full_free_bonus(full_sorted, a_sorted);
	return (0);
}

void	ft_check_result_bonus(t_full_stack **full, int argc, char **argv)
{
	int	result;

	result = ft_check_bonus(full, argc, argv);
	if (result == -1)
		ft_putstr_fd("KO\n", 1);
	else
		ft_putstr_fd("OK\n", 1);
}
