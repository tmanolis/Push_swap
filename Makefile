SRCS = main.c	\
		
OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT_PATH = ./Libft

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror
L_FLAGS = -L ${LIBFT_PATH} -lft

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}
			
${NAME}:	${OBJS}
			@cd $(LIBFT_PATH) && $(MAKE)
			${CC} ${CFLAGS} ${OBJS} ${LFLAGS} -o ${NAME}

clean:		
			@cd $(LIBFT_PATH) && $(MAKE) clean
			${RM} ${OBJS}

fclean:		clean
			@cd $(LIBFT_PATH) && $(MAKE) fclean
			${RM} ${NAME} 

re:			fclean all

.PHONY:		all clean fclean re