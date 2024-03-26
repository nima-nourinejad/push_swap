/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_empty_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:36:36 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/30 12:25:56 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_empty_bonus(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!argv[i][0])
			return (1);
		i++;
	}
	return (0);
}
