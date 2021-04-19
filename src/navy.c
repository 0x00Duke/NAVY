/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "navy.h"

int navy(int ac, char **av)
{
    t_maps *maps;
    int player = 2;

    my_printf(MY_PID, getpid());
    if (connection(ac, av) == 84)
        return (84);
    maps = fill_maps(av[ac - 1]);
    if (maps == NULL)
        return (84);
    if (ac == 2) {
        if (pause() != -1)
            return (84);
        my_printf(ENEMY_CO);
        player = 1;
    }
    print_maps(maps);
    if (game_loop(maps, player) == 84)
        return (84);
    return (player - 1);
}