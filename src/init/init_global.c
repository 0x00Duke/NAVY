/*
** EPITECH PROJECT, 2020
** navy
** File description:
** init the global stuct
*/

#include "navy.h"

//t_global *game_info;

int init_global(int ac, char **av)
{
    game_info = malloc(sizeof(t_global));

    if (game_info == NULL)
        return (84);
    if (ac != 2)
        game_info->pid = my_getnbr(av[1], 0);
    return (0);
}