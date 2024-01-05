/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal_rotate_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:48:01 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/27 15:51:14 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cal_rotate_a_num(t_full_stack **full, int n)
{
	t_stack	*a;
	t_stack	*temp;
	int		i;

	a = (*full)->stack_a;
	i = 0;
	temp = a;
	while (n != temp->num)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
