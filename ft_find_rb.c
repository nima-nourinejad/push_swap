/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_rb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:36:52 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/28 15:36:53 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_rb(t_full_stack **full, int min_n, int max_n)
{
	int		i;
	t_stack	*temp;
	t_stack	*last;
	int		tempnum;
	int		lastnum;

	i = 0;
	temp = (*full)->stack_b;
	last = ft_last(temp);
	tempnum = temp->num;
	lastnum = last->num;
	while (!((tempnum == min_n && lastnum == max_n)
			|| (tempnum == max_n && lastnum == min_n)))
	{
		last = temp;
		temp = temp->next;
		tempnum = temp->num;
		lastnum = last->num;
		i++;
	}
	return (i);
}
