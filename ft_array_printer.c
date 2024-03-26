/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:05:53 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/15 14:52:51 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_array_printer(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("%d ", array[i]);
		i++;
	}
}
