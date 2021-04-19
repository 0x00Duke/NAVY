/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check if all boats of a player are down
*/

#include "map.h"

int is_end_game(t_maps *maps)
{
    int counter = 0;

    counter = check_map(maps->map_a);
    if (counter == 0)
        return (1);
    counter = check_map(maps->map_b);
    if (counter == 0)
        return (2);
    return (0);
}

int check_map(char **map)
{
    int x = 2;
    int y = 2;
    int counter = 0;

    while (map[y] != NULL) {
        x = 2;
        while (x < SIZE_LINE) {
            if (map[y][x] == 'x')
                counter++;
            x += 2;
        }
        y++;
    }
    if (counter == 14)
        return (0);
    return (1);
}
