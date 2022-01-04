SRCS =	./srcs/ft_printf.c \
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INCS = includes



all: ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

$(NAME): $(OBJS)
			ar -rcs $(NAME) $(OBJS)

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re
