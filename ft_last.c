/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:56:22 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/20 14:06:45 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_last(t_stack *node)
{
	t_stack	*last;

	if (!node)
		return (0);
	last = node;
	while (last->next)
		last = last->next;
	return (last);
}
