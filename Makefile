SRCS = main.c		\
	utils.c			\
	check_errors.c	\
		
OBJS = $(SRCS:.c=.o)

NAME = push_swap

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

# .c.o:
# 			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# *-------Libft-------* 

LIBFT_DIR = Libft
LIBFT_PATH = ./Libft
LFLAGS = -L$(LIBFT_PATH) -lft

# *=======RULES=======*

all:		$(NAME)
			
$(NAME):	$(OBJS)
			@make -C $(LIBFT_DIR)
	        $(CC) $(CFLAGS) $(OBJS) $(LFLAGS) -o $(NAME)

$(MAKE_LIBFT): @make -c $(LIBFT_PATH)

clean:		
			@cd $(LIBFT_PATH) && $(MAKE) clean
			$(RM) $(OBJS)

fclean:		clean
			@cd $(LIBFT_PATH) && $(MAKE) fclean
			$(RM) $(NAME) 

re:			fclean all

.PHONY:		all clean fclean re