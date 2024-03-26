# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnourine <nnourine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 15:48:51 by nnourine          #+#    #+#              #
#    Updated: 2024/01/02 11:59:06 by nnourine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRC = 	push_swap.c \
		ft_newnode.c \
		ft_swap.c \
		ft_rotate.c \
		ft_reverse_rotate.c \
		ft_push.c \
		ft_stack_maker.c \
		ft_stack_printer.c \
		ft_array_printer.c \
		ft_array_maker.c \
		ft_full_free.c \
		ft_three_sort.c \
		ft_three_sort_b.c \
		ft_move_cal.c \
		ft_main_sort.c \
		ft_last.c\
		ft_rvsrr.c\
		ft_size.c \
		ft_atoi_error.c\
		ft_check_dup.c \
		ft_check_sort.c \
		ft_min.c \
		ft_max.c \
		ft_numtop.c \
		ft_final_insert.c \
		ft_push3_sort_b.c \
		ft_check_empty.c \
		ft_move.c \
		ft_move_r.c \
		ft_move_rr.c \
		ft_cal_rotate_num.c \
		ft_update_move.c \
		ft_find_rb.c

BNS = 	bonus_bonus.c \
		ft_check_empty_bonus.c \
		ft_full_free_bonus.c \
		ft_array_maker_bonus.c \
		ft_atoi_error_bonus.c \
		ft_check_dup_bonus.c \
		ft_stack_maker_bonus.c \
		ft_newnode_bonus.c \
		ft_read_bonus.c \
		ft_run_command_bonus.c \
		ft_check_sort_bonus.c \
		ft_no_instruction_bonus.c \
		ft_rotate_bonus.c \
		ft_reverse_rotate_bonus.c \
		ft_swap_bonus.c \
		ft_push_bonus.c \
		ft_stack_printer_bonus.c \
		ft_bubble_sort_bonus.c\
		ft_size_bonus.c \
		ft_check_result_bonus.c \
		ft_command_list_bonus.c \
		ft_command_check_bonsu.c
				
OBJ = $(SRC:.c=.o)
OBJBNS = $(BNS:.c=.o)
%.o: %.c
	cc $(CFLAGS) -c $< -o $@

NAME = push_swap
all: $(NAME)
$(NAME): $(OBJ)
	make -C libft bonus
	make -C ft_printf all
	cc $(CFLAGS) -o $(NAME) $(OBJ) -Llibft -lft -Lft_printf -lftprintf

BONUSNAME = checker
bonus : $(BONUSNAME)
$(BONUSNAME): $(OBJBNS)
	make -C libft bonus
	make -C ft_printf all
	cc $(CFLAGS) -o $(BONUSNAME) $(OBJBNS) -Llibft -lft -Lft_printf -lftprintf

clean:
	rm -f $(OBJ)
	rm -f $(OBJBNS)
	make -C libft clean
	make -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	rm -f $(BONUSNAME)
	make -C libft fclean
	make -C ft_printf fclean

re: fclean all 

.PHONY: all clean fclean re bonus