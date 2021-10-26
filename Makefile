# *--------- SOURCES ---------* 

SRCS_DIR = ./srcs/
SRCS = algorithm/sort_2_args.c	\
	algorithm/sort_3_args.c		\
	operations/push.c			\
	operations/rotate.c			\
	operations/reverse_rotate.c	\
	operations/swap.c			\
	utils/check_errors.c		\
	utils/get_args.c			\
	utils/init_and_free.c		\
	utils/parsing.c				\
		
OBJS = $(addprefix $(SRCS_DIR), $(SRCS:.c=.o))

# *--------- Libft ---------* 

LIBFT_DIR = Libft
LIBFT_PATH = ./Libft
LFLAGS = -L$(LIBFT_PATH) -lft

# *--------- OTHERS ---------*

NAME = push_swap

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

# .c.o:
# 			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# *========= RULES =========*

all:		$(NAME)
			
$(NAME):	$(OBJS)
			@make -C $(LIBFT_DIR)
	        $(CC) $(CFLAGS) $(OBJS) main.c $(LFLAGS) -o $(NAME)

# $(MAKE_LIBFT): @make -c $(LIBFT_PATH)

clean:		
			@cd $(LIBFT_PATH) && $(MAKE) clean
			$(RM) $(OBJS)

fclean:		clean
			@cd $(LIBFT_PATH) && $(MAKE) fclean
			$(RM) $(NAME) 

re:			fclean all

.PHONY:		all clean fclean re