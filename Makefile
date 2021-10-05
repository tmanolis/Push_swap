SRCS = main.c		\
	check_errors.c	\
		
OBJS = $(SRCS:.c=.o)

NAME = push_swap

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

# *-------Libft-------* 

LIBFT_DIR = libft
LIBFT_PATH = ./libft
L_FLAGS = -L$(LIBFT_PATH) -lft

# .c.o:
# 			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# *=======RULES=======*

all:		$(NAME)
			
$(NAME):	$(OBJS)
			@make -C $(LIBFT_DIR)
	        $(CC) $(CFLAGS) $(LFLAGS) $(OBJS) -o $(NAME)

$(MAKE_LIBFT): @make -c $(LIBFT_PATH)

clean:		
			@cd $(LIBFT_PATH) && $(MAKE) clean
			$(RM) $(OBJS)

fclean:		clean
			@cd $(LIBFT_PATH) && $(MAKE) fclean
			$(RM) $(NAME) 

re:			fclean all

.PHONY:		all clean fclean re