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

# *--------- bonus ---------*

BONUS_DIR = ./bonus/
BONUS_SRCS = main_bonus.c								\
	check_instructions.c								\
	checker.c											\
	get_next_line.c										\
	get_next_line_utils.c								\
	operations/push_bonus.c								\
	operations/reverse_rotate_bonus.c					\
	operations/rotate_bonus.c							\
	operations/swap_bonus.c								\

BONUS_OBJS = $(addprefix $(BONUS_DIR), $(BONUS_SRCS:.c=.o))

# *--------- includes ---------* 

INCLUDES_DIR = -I includes/

# *--------- Libft ---------* 

LIBFT_DIR = ./Libft
LIBFT_FLAGS = -L$(LIBFT_DIR) -lft

# *--------- OTHERS ---------*

NAME = push_swap
B_NAME = checker

CC = clang
RM = rm -f

CFLAGS = -g -Wall -Wextra -Werror

# *========= RULES =========*

all:		$(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $< $(INCLUDES_DIR) 

$(NAME):	$(OBJS)
			make -C $(LIBFT_DIR)
	        $(CC) $(CFLAGS) $(OBJS) $(LIBFT_FLAGS) $(INCLUDES_DIR) main.c -o $(NAME)

$(B_NAME):	$(BONUS_OBJS) $(OBJS)
			make -C $(LIBFT_DIR)
			$(CC) $(CFLAGS) $(OBJS) $(BONUS_OBJS) $(LIBFT_FLAGS) $(INCLUDES_DIR) -o $(B_NAME)

clean:
			make -C $(LIBFT_DIR) clean
			$(RM) $(OBJS)

bclean:		clean
			$(RM) $(BONUS_OBJS)

fclean:		clean bclean
			make -C $(LIBFT_DIR) fclean
			$(RM) $(NAME) $(B_NAME)

re:			fclean all

.PHONY:		all clean fclean re