/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-navy-leon.ducasse
** File description:
** check_if_hit.c
*/

#include "navy.h"

int check_if_hit(int *pos, t_maps *maps)
{
    if (maps->map_a[pos[0]][pos[1]] != '.' &&
    maps->map_a[pos[0]][pos[1]] != 'o') {
        maps->map_a[pos[0]][pos[1]] = 'x';
        return (0);
    }
    maps->map_a[pos[0]][pos[1]] = 'o';
    return (1);
}