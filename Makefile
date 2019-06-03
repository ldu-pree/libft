NAME = libft.a

SRC = ft_atoi.c \
	  ft_isupper.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_isalpha.c \
	  ft_islower.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_strlen.c \
	  ft_memalloc.c \
	  ft_memset.c \
	  ft_strdup.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_isalnum.c \
	  ft_tolower.c \
	  ft_isascii.c \
	  ft_memdel.c


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
