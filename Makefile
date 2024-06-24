NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:%.c=%.o)

#program
all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	gcc -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
PHONY : all clean fclean re