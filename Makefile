NAME = libft.a

SRC = ft_atoi.c ft_isupper.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_isalpha.c \
	 ft_islower.c ft_isdigit.c ft_isprint.c ft_toupper.c ft_strlen.c ft_memalloc.c ft_memset.c ft_strdup.c \


all :
		gcc -c $(SRC) -Wextra -Werror -Wall -I .
		ar -rc $(NAME) *.o
		ranlib libft.a

clean:
		rm *.o

fclean: clean
		rm libft.a

re: fclean all

mhlem: all
		gcc main.c libft.a
		./a.out
		rm *.o

test:
		norminette $(SRC)
		gcc $(SRC) main.c -Wall -Wextra -Werror -o test
		rm test
