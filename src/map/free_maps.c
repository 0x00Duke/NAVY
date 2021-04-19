/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-navy-leon.ducasse
** File description:
** free_maps.c
*/

#include "map.h"

void free_maps(t_maps *maps)
{
    int x = 0;

    while (x != LINE_MAP) {
        free(maps->map_a[x]);
        x++;
    }
    free(maps->map_a);
    x = 0;
    while (x != LINE_MAP) {
        free(maps->map_b[x]);
        x++;
    }
    free(maps->map_b);
}