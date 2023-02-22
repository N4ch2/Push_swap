SRCS = srcs/parcing/ft_format_input.c

OBJS = $(SRCS:.c=.o)

PROGRAM = push_swap.c

NAME = push_swap

CC = gcc 

CFLAGS = -Wall -Werror -Wextra

INCLUDE = ./library/libftprintf.a

all : $(NAME) 

.c : 
	$(CC) $(CFLAGS) $< $(INCLUDE)  -o $(<:.c=.o) 

$(INCLUDE) :
	make -C ./library

$(NAME) : $(INCLUDE) $(OBJS)
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