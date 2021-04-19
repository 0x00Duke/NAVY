##
## EPITECH PROJECT, 2020
## navy
## File description:
## makefile
##

NAME	=	navy

SRC	=	src/main.c						\
		src/navy.c						\
		src/error/error.c				\
		src/error/content.c				\
		src/error/size_num.c			\
		src/error/pos_ship.c			\
		src/map/get_map.c				\
		src/map/create_array.c			\
		src/map/fill_array.c			\
		src/map/get_letter_pos.c		\
		src/map/put_boats.c	 			\
		src/map/print_array.c			\
		src/map/fill_maps.c				\
		src/map/print_maps.c			\
		src/map/free_maps.c				\
		src/init/init_global.c			\
		src/init/handler.c				\
		src/signal/connection.c			\
		src/signal/send.c				\
		src/signal/receive.c			\
		src/signal/get_pos.c			\
		src/signal/init_sigaction.c		\
		src/signal/check_if_hit.c		\
		src/signal/catch_sig.c			\
		src/check/check_is_end_game.c	\
		src/game_loop.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I ./include/
CFLAGS	+=	-pedantic
CFLAGS	+=	-W -Wall -Wextra -Werror -g3

LDLIBS	+=	-L./lib/ -lmy

CC		=	gcc

RM		=	rm -rf

all:	$(NAME)

$(NAME):	make_lib $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDLIBS)

make_lib:
	make -C lib/

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C lib/

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) fclean -C lib/

re:	fclean all
	$(MAKE) re -C lib/

auteur:
	echo $(USER) > auteur
