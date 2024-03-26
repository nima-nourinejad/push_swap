/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 11:21:57 by nnourine          #+#    #+#             */
/*   Updated: 2024/01/02 15:04:12 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_BONUS_H
# define BONUS_BONUS_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

typedef struct s_command
{
	char				com[4];
	struct s_command	*next;
}	t_command;

typedef struct s_full_stack
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
}	t_full_stack;

int			ft_check_empty_bonus(int argc, char *argv[]);
int			ft_full_free_bonus(t_full_stack *full, int *array);
int			ft_full_free_error_bonus(t_full_stack *full, int *array);
int			ft_array_maker_bonus(int argc, char *argv[], int **a, int *size);
int			ft_atoi_error_bonus(char *str, int *error);
int			ft_check_dup_bonus(int *a, int size);
int			ft_stack_maker_bonus(int *array, int size, t_full_stack	**full);
t_stack		*ft_newnode_bonus(int n);
int			ft_read_run_bonus(t_full_stack	**full);
int			ft_check_sort_bonus(int *a, int size);
void		ft_no_instruction_bonus(void);
int			ft_run_command_bonus(t_full_stack	**full, char *command);
void		ft_rotate_a_bonus(t_full_stack **full);
void		ft_rotate_b_bonus(t_full_stack **full);
void		ft_rotate_ab_bonus(t_full_stack **full);
void		ft_reverse_rotate_a_bonus(t_full_stack **full);
void		ft_reverse_rotate_b_bonus(t_full_stack **full);
void		ft_reverse_rotate_ab_bonus(t_full_stack **full);
void		ft_swap_a_bonus(t_full_stack **full);
void		ft_swap_b_bonus(t_full_stack **full);
void		ft_swap_ab_bonus(t_full_stack **full);
void		ft_push_a_bonus(t_full_stack **full);
void		ft_push_b_bonus(t_full_stack **full);
void		ft_stack_printer_bonus(t_full_stack *full);
int			*ft_bubble_sort_bonus(int *array, int size);
int			ft_size_a_bonus(t_full_stack **full);
int			ft_size_b_bonus(t_full_stack **full);
void		ft_check_result_bonus(t_full_stack **full, int argc, char **argv);
int			ft_command_maker_bonus(char command[4], t_command	**full_command);
t_command	*ft_command_node_bonus(char command[4]);
int			ft_command_check_bonus(char *command);

#endif // BONUS_BONUS_H