NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 	ft_printf.c\
		ft_format.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_putchar.c\
		ft_u_putnbr.c\
		ft_tobase16.c\
		ft_topointer.c\
		
OBJS = $(SRC:.c=.o)

MAIN = main.c

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

c:
	@$(CC) $(CFLAGS) $(MAIN) -L. -lftprintf -o a
	@./a
.PHONY: all clean fclean re