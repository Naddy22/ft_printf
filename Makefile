NAME = libftprintf.a
AR = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putstr.c ft_putchar.c ft_strchr.c ft_putnbr.c ft_putnbr_unsigned.c \
ft_strlen.c ft_putnbr_base.c ft_check_pourcent.c
OBJ = $(SRC:.c=.o) #les .c sont lu en .o

all: $(NAME)

$(NAME): $(OBJ) # $@ prends la target et $^ prends la dependance du dessus
	$(AR) $@ $^

%.o: %.c ft_printf.h # remplace les .c par .o avec -c . $< = dependance le plus a gauche
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re #.phony dit que ca se ne sont pas des fichiers
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
