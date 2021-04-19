/*
** EPITECH PROJECT, 2020
** navy
** File description:
** put boats on map
*/

#include "map.h"

char **change_char(char **map, t_coord coord)
{
    int y = 2;
    int x = 2;

    while (y != 10) {
        x = 2;
        while (x <= 16) {
            if (x >= coord.xa && x <= coord.xb &&
                y >= coord.ya && y <= coord.yb && map[y][x] == '.'){
                    map[y][x] = coord.c;
            } else if (x >= coord.xa && x <= coord.xb &&
                y >= coord.ya && y <= coord.yb && map[y][x] != '.') {
                return (NULL);
            }
            x += 2;
        }
        y++;
    }
    return (map);
}

int put_boats(char **map, char *buf)
{
    int m = 0;
    t_coord coord;

    while (m <= 25) {
        coord.c = buf[m];
        coord.xa = pos_letter(buf[m + 2]);
        coord.xb = pos_letter(buf[m + 5]);
        if (coord.xa == 0 || coord.xb == 0)
            return (84);
        coord.ya = buf[m + 3] - 47;
        coord.yb = buf[m + 6] - 47;
        if (change_char(map, coord) == NULL)
            return (84);
        m += 8;
    }
    return (0);
}