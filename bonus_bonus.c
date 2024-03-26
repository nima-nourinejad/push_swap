/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 11:05:46 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 15:04:26 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

int	main(int argc, char *argv[])
{
	int				*a;
	t_full_stack	*full;
	int				size;
	int				error;
	int				error_dup;

	if (argc < 2)
		return (0);
	if (ft_check_empty_bonus(argc, argv))
		return (ft_full_free_error_bonus(0, 0));
	error = ft_array_maker_bonus(argc, argv, &a, &size);
	if (error == -1)
		return (0);
	error_dup = ft_check_dup_bonus(a, size);
	if (error == 1 | error_dup == 1)
		return (ft_full_free_error_bonus(0, a));
	error = ft_stack_maker_bonus(a, size, &full);
	if (error == -1)
		return (ft_full_free_bonus(0, a));
	error = ft_read_run_bonus(&full);
	if (error == -1)
		return (ft_full_free_error_bonus(full, a));
	ft_check_result_bonus(&full, argc, argv);
	return (ft_full_free_bonus(full, a));
}
