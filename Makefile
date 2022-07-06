NAME			=	pipex
HEAD			=	includes/pipex.h
LIB				=	libft/libft.a
CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra -g
SRCS			=	srcs/pipex.c srcs/paths.c srcs/free_stuff.c
OBJS			=	${SRCS:.c=.o}
RM				=	rm -f

.c.o		:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME)		:	$(OBJS)
				 make -s -C libft
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIB)
				echo Pret!

all			:	$(NAME)

clean		:	
				${RM} ${OBJS}
				make clean -s -C libft

fclean		:	clean
				$(RM) $(NAME)
				make fclean -s -C libft
				echo Tout propre

re			:	fclean all

.PHONY		:	all clean fclean re
.SILENT		:	all clean fclean .c.o $(NAME) $(OBJS) $(CC) $(FLAGS)
