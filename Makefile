NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_FILES = ft_printf/ft_printf.c ft_printf/ft_putchar.c\
			ft_printf/ft_puthexa.c\
			ft_printf/ft_putstr.c\
			ft_printf/ft_putheXa.c\
			ft_printf/ft_putnbr.c\
			ft_printf/ft_putadress.c\
			ft_printf/ft_putunsigned_int.c \
			libft/ft_lstnew.c libft/ft_atoi.c libft/ft_swap.c libft/ft_lstadd_front.c libft/ft_lstlast.c libft/ft_lstadd_back.c  libft/ft_lstsize.c libft/ft_splite.c libft/ft_substr.c libft/ft_calloc.c libft/ft_strlen.c libft/ft_bzero.c libft/ft_strjoin.c libft/ft_strdup.c libft/ft_lstclear.c\
			swap.c ft_create_list.c push.c retate.c reverse.c ft_manage_tree.c ft_manage_five.c get_min.c get_max.c get_index.c rotate_to_top.c create_sorted_array.c get_range.c is_sorted.c check_reverse.c push_swap.c sort_all.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

.SECONDARY: $(OBJ_FILES)
