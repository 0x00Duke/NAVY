/*
** EPITECH PROJECT, 2020
** navy
** File description:
** game loop
*/

#include "navy.h"

int game_loop(t_maps *maps, int player)
{
    int turn = player;
    int err = 0;
    game_info->signum = SIGUSR1;

    while (is_end_game(maps) == 0) {
        if (turn == 1)
            err = send_signal(maps);
        else if (turn == 2)
            err = receive(maps);
        if (turn == 1)
            turn = 2;
        else
            turn = 1;
        if (err == 84)
            return (84);
        print_maps(maps);
    }
    print_end(maps);
    return (0);
}

void print_end(t_maps *maps)
{
    if (is_end_game(maps) == 1)
        my_printf(LOOSE);
    else
        my_printf(WIN);
    free_maps(maps);
}