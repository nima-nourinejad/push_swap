/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_maker_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:13:51 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/30 12:37:17 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_bonus.h"

static void	ft_free_bonus(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free (split[i]);
		i++;
	}
	free(split);
}

static int	ft_array_maker_2_bonus(char *str, int **a, int *size)
{
	char	**split;
	int		i;
	int		error;
	int		t;

	error = 0;
	split = ft_split(str, ' ');
	i = 0;
	while (split[i])
		i++;
	*size = i;
	*a = ft_calloc((size_t)i, sizeof(int));
	if (!*a)
		return (-1);
	i = 0;
	while (split[i])
	{
		(*a)[i] = ft_atoi_error_bonus(split[i], &t);
		if (t == 1)
			error = 1;
		i++;
	}
	ft_free_bonus(split);
	return (error);
}

static int
	ft_array_maker_full_bonus(int argc, char *argv[], int **a, int *size)
{
	int	i;
	int	t;
	int	error;

	error = 0;
	*a = ft_calloc((size_t)argc - 1, sizeof(int));
	if (!*a)
		return (-1);
	i = 1;
	while (i < argc)
	{
		(*a)[i - 1] = ft_atoi_error_bonus(argv[i], &t);
		if (t == 1)
			error = 1;
		i++;
	}
	*size = argc - 1;
	return (error);
}

int	ft_array_maker_bonus(int argc, char *argv[], int **a, int *size)
{
	int	error;

	error = 0;
	if (argc == 2)
		error = ft_array_maker_2_bonus(argv[1], a, size);
	else
		error = ft_array_maker_full_bonus(argc, argv, a, size);
	return (error);
}
