/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:13:00 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/31 11:42:21 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_bubble_sort_bonus(int *array, int size)
{
	int	temp;
	int	i;
	int	j;

	if (size < 2)
		return (array);
	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	return (array);
}
