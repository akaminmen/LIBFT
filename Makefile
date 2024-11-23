NAME = libft.a

CC = cc
CFLAGS = -g -Wall -Wextra -Werror

SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\n( ͡° ͜ʖ ͡°) 👍 -ALL RIGHT WHITOUT BONUS MY BOY!\n"

$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus



## -------------------------------------------------------------------------
##  all: Compila el proyecto.
##  clean: Elimina archivos objeto.
##  fclean: Elimina archivos objeto y el archivo final.
##  re: Limpia y recompila todo.
##  $(NAME): Crea el archivo final a partir de los archivos objeto.
##  $(OBJ): Compila los archivos fuente en archivos objeto.
## -------------------------------------------------------------------------