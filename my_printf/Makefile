##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makefile
##

SRC =	my_printf.c \
		main_flags.c \
		display_number.c \
		./flags/flag_octal.c \
		./flags/flag_ptr.c \
		./flags/flag_u.c \
		./flags/flag_x.c \
		./flags/flag_x_upper.c \
		./flags/flag_b.c	\
		./flags/flag_f.c	\
		./flags/flag_e.c	\
		./flags/flag_g.c
		./lib/my_put_nbr.c \
		./lib/my_putchar.c \
		./lib/my_putstr.c \
		./lib/my_strlen.c 

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
