CC = gcc

FLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

SRCS = ft_printf.c ft_itoa_d.c ft_itoa_u.c ft_printf_x.c ft_itoa_x.c ft_itoa_ptr.c ft_itoa_helpers_part_one.c ft_itoa_helpers_part_two.c ft_printf_p.c ft_printf_c.c ft_printf_d.c ft_printf_percent.c ft_printf_u.c\

OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -g -c  $< -o $@

all:	$(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all


