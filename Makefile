SRCS =	./ft_printf.c \
		./ft_basehexa.c \
		./ft_baseten.c \
		./ft_char.c \
		./ft_needchar.c \
		./ft_putnbr_base.c:wq

OBJS = ${SRCS:.c = .o}

NAME = libftprintf.a
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
