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

OBJS = $(SRCS:.c=.o)

PROGRAM = push_swap.c

NAME = push_swap

CC = gcc -g

CFLAGS = -Wall -Werror -Wextra

INCLUDE = ./library/libftprintf.a

all : $(NAME) 

.c : 
	$(CC) $(CFLAGS) $< $(INCLUDE)  -o $(<:.c=.o) 

$(INCLUDE) :
	make -C ./library

$(NAME) : $(INCLUDE) $(OBJS) $(PROGRAM)
	$(CC) $(CFLAGS) $(PROGRAM) $(INCLUDE) $(OBJS)  -o $(NAME)

clean :
	@cd library && make clean
	@echo "objects deleted"

fclean : 
	@cd library && make fclean
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "objects and programs deleted"

re : fclean all

.PHONY: all clean fclean re