/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:57:07 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/05 17:06:57 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int				*a;
	t_full_stack	*full;
	int				size;
	int				error;
	int				error_dup;

	if (argc < 2)
		return (0);
	if (ft_check_empty(argc, argv))
		return (ft_full_free_error(0, 0));
	error = ft_array_maker(argc, argv, &a, &size);
	if (error == -1)
		return (0);
	error_dup = ft_check_dup(a, size);
	if (error == 1 || error_dup == 1)
		return (ft_full_free_error(0, a));
	if (size < 2)
		return (ft_full_free(0, a));
	if (ft_check_sort(a, size) == 1)
		return (ft_full_free(0, a));
	error = ft_stack_maker(a, size, &full);
	if (error == -1)
		return (ft_full_free(0, a));
	ft_main_sort(&full, size);
	return (ft_full_free(full, a));
}
