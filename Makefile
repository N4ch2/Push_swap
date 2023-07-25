SRCS = srcs/parcing/ft_format_input.c\
		srcs/parcing/ft_clean.c\
		srcs/parcing/ft_check_list.c\
		srcs/stacks/ft_fill_stack.c\
		srcs/stacks/ft_utils_stack.c\
		srcs/movements/ft_swap.c\
		srcs/movements/ft_push.c\
		srcs/movements/ft_rotate.c\
		srcs/algorithm/ft_utils_algorithm.c\
		srcs/algorithm/ft_three_algorithm.c\
		srcs/algorithm/ft_algorithm.c\
		srcs/algorithm/ft_utils_insert.c\
		srcs/algorithm/ft_insert.c\
		srcs/algorithm/ft_general_utils.c\
		
OBJS = $(SRCS:.c=.o)

SRCS_BONUS = 	bonus/get_next_line_utils.c\
				bonus/get_next_line.c\
				bonus/checker_utils.c\
		
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

PROGRAM = push_swap.c

PROGRAM_BONUS = bonus/checker.c

NAME = push_swap

NAME_BONUS = checker

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INCLUDE = ./library/libftprintf.a

all : $(NAME) 

.c : 
	$(CC) $(CFLAGS) $< $(INCLUDE)  -o $(<:.c=.o) 

$(INCLUDE) :
	make -C ./library

$(NAME) : $(INCLUDE) $(OBJS) $(PROGRAM)
	$(CC) $(CFLAGS) $(PROGRAM) $(INCLUDE) $(OBJS)  -o $(NAME)

bonus : $(INCLUDE) $(OBJS) $(OBJS_BONUS) $(PROGRAM_BONUS)
	$(CC) $(CFLAGS) $(PROGRAM_BONUS) $(INCLUDE) $(OBJS) $(OBJS_BONUS) -o $(NAME_BONUS)

clean :
	@cd library && make clean
	@cd ../checker
	@$(RM) $(OBJS_BONUS)
	@cd ..
	@$(RM) $(OBJS)
	@echo "objects deleted"

fclean : 
	@cd library && make fclean
	@$(RM) $(OBJS)
	@$(RM) $(OBJS_BONUS)
	@$(RM) $(NAME)
	@$(RM) $(NAME_BONUS)
	@echo "objects and programs deleted"

re : fclean all

.PHONY: all clean fclean re