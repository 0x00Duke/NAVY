##
## EPITECH PROJECT, 2020
## printf
## File description:
## makefile
##

SRC	=	src/printf/my_printf.c									\
		src/c_lib/my_put_nbr.c									\
		src/c_lib/my_getnbr.c									\
		src/c_lib/my_putchar.c									\
		src/c_lib/my_putstr.c									\
		src/c_lib/my_strlen.c									\
		src/c_lib/my_putnbr_base.c								\
		src/c_lib/my_put_unsigned_nbr.c							\
		src/c_lib/my_strcmp.c									\
		src/c_lib/my_strdup.c									\
		src/c_lib/my_strlowcase.c								\
		src/printf/flags/flag_char.c							\
		src/printf/flags/flag_int.c								\
		src/printf/flags/flag_str.c								\
		src/printf/flags/flag_octal.c							\
		src/printf/flags/flag_hexa_low.c						\
		src/printf/flags/flag_hexa_upper.c						\
		src/printf/flags/flag_binary.c							\
		src/printf/flags/flag_percent.c							\
		src/printf/flags/flag_pointer.c							\
		src/printf/flags/flag_unsigned_int.c					\
		src/printf/main_fonctions/create_and_fill_array.c		\
		src/printf/main_fonctions/create_and_fill_array_two.c	\
		src/printf/main_fonctions/count_printed_char.c			\
		src/printf/main_fonctions/run_flag_funct.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I ./include/
CFLAGS	+=	-W -Werror -Wall -Wextra -pedantic -Wno-long-long

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
