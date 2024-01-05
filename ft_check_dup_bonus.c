/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:15:29 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/30 12:44:41 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_dup_bonus(int *a, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j != i && a[i] == a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
