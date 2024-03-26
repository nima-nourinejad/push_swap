/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:36:16 by nnourine          #+#    #+#             */
/*   Updated: 2023/12/31 09:45:35 by nnourine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

typedef struct s_full_stack
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
}	t_full_stack;

typedef struct s_move
{
	int	ra;
	int	rra;
	int	rb;
	int	rrb;
	int	rr;
	int	rrr;
	int	n_move;
}	t_move;

t_stack	*ft_newnode(int n);
void	ft_swap_a(t_full_stack **full);
void	ft_swap_b(t_full_stack **full);
void	ft_swap_ab(t_full_stack **full);
void	ft_rotate_aa(t_full_stack **full);
void	ft_rotate_bb(t_full_stack **full);
void	ft_rotate_a(t_full_stack **full);
void	ft_rotate_b(t_full_stack **full);
void	ft_rotate_ab(t_full_stack **full);
void	ft_reverse_rotate_aa(t_full_stack **full);
void	ft_reverse_rotate_bb(t_full_stack **full);
void	ft_reverse_rotate_a(t_full_stack **full);
void	ft_reverse_rotate_b(t_full_stack **full);
void	ft_reverse_rotate_ab(t_full_stack **full);
void	ft_push_a(t_full_stack **full);
void	ft_push_b(t_full_stack **full);
int		ft_stack_maker(int *array, int size, t_full_stack	**full);
void	ft_stack_printer(t_full_stack *full);
void	ft_array_printer(int *array, int size);
int		ft_array_maker(int argc, char *argv[], int **a_index, int *size);
int		ft_full_free(t_full_stack *full, int *array);
void	ft_three_sort(t_full_stack **full, int size);
void	ft_three_sort_b(t_full_stack **full, int size);
void	ft_min_move(t_full_stack **full);
void	ft_main_sort(t_full_stack **full, int size);
t_stack	*ft_last(t_stack *node);
int		ft_rvsrr_a(t_full_stack **full, int index, int size);
int		ft_rvsrr_b(t_full_stack **full, int index, int size);
int		ft_size_a(t_full_stack **full);
int		ft_size_b(t_full_stack **full);
int		ft_atoi_error(char *str, int *error);
int		ft_check_dup(int *a, int size);
int		ft_check_sort(int *a, int size);
int		ft_min_b(t_full_stack **full);
int		ft_min_n_b(t_full_stack **full, int n, int min);
int		ft_max_b(t_full_stack **full);
int		ft_max_n_b(t_full_stack **full, int n, int max);
void	ft_numtop_a(t_full_stack **full, int num);
void	ft_numtop_b(t_full_stack **full, int num);
void	ft_final_insert(t_full_stack **full);
void	ft_push3_sort_b(t_full_stack **full, int size);
int		ft_full_free_error(t_full_stack *full, int *array);
int		ft_check_empty(int argc, char *argv[]);
void	ft_move(t_full_stack **full, t_move move);
void	ft_move_rr(t_full_stack **full, int n);
void	ft_move_ra(t_full_stack **full, int n);
void	ft_move_rb(t_full_stack **full, int n);
void	ft_move_rrr(t_full_stack **full, int n);
void	ft_move_rra(t_full_stack **full, int n);
void	ft_move_rrb(t_full_stack **full, int n);
void	ft_move_zero(t_move *move);
int		ft_cal_rotate_a_num(t_full_stack **full, int n);
void	ft_update_move(t_move *move, int bestmove);
int		ft_find_rb(t_full_stack **full, int min_n, int max_n);

#endif // PUSH_SWAP_H