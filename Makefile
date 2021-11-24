# *--------- SOURCES ---------* 

SRCS_DIR = ./srcs/
SRCS = algorithm/sort_2_args.c							\
	algorithm/sort_3_args.c								\
	algorithm/sort_4_args.c								\
	algorithm/sort_5_args.c								\
	algorithm/sort_medium_set.c							\
	algorithm/big_args_set/devide_and_sort.c			\
	algorithm//big_args_set/median_and_keynumber.c		\
	algorithm//big_args_set/proximity.c					\
	algorithm/big_args_set/sort_big_set.c				\
	operations/push.c									\
	operations/rotate.c									\
	operations/reverse_rotate.c							\
	operations/swap.c									\
	utils/check_errors.c								\
	utils/get_args.c									\
	utils/init_and_free.c								\
	utils/parsing.c										\
		
OBJS = $(addprefix $(SRCS_DIR), $(SRCS:.c=.o))

# *--------- INCLUDES ---------* 

INCLUDES_DIR = -I includes/header

# *--------- Libft ---------* 

LIBFT_DIR = ./includes/Libft
LIBFT_FLAGS = -L$(LIBFT_DIR) -lft

# *--------- OTHERS ---------*

NAME = push_swap

CC = clang
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

# *========= RULES =========*

all:		$(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $< $(INCLUDES_DIR) 

$(NAME):	$(OBJS)
			make -C $(LIBFT_DIR)
	        $(CC) $(CFLAGS) $(OBJS) main.c $(LIBFT_FLAGS) $(INCLUDES_DIR) -o $(NAME)

clean:		
			make -C $(LIBFT_DIR) clean
			$(RM) $(OBJS)

fclean:		clean
			make -C $(LIBFT_DIR) fclean
			$(RM) $(NAME) 

re:			fclean all

.PHONY:		all clean fclean re