

NAME = push_swap

CC = cc
CFLAGS = -g3 -Wunreachable-code -Ofast
RM = rm -f

INC = ./includes
LIBFT = ./libft

HEADERS = -I $(INC)
LIBS = ./libft/libft.a

FILES = srcs/push_swap/main.c srcs/push_swap/00_utils.c srcs/push_swap/01_utils.c srcs/push_swap/02_utils.c \
		srcs/push_swap/03_utils.c srcs/push_swap/ft_sa.c

OBJS = $(FILES:%.c=%.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $(HEADERS)	-c $< -o $@

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@$(CC) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)
	@echo "SUCCESS!!"

clean:
	@rm -rf $(OBJS)
	@make clean -C libft

fclean: clean
	@make fclean -C libft
	@rm -rf
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re