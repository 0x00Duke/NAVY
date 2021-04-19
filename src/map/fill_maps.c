/*
** EPITECH PROJECT, 2020
** navy
** File description:
** get map for player one
*/

#include "map.h"

t_maps *fill_maps(char *path)
{
    t_maps *maps = malloc(sizeof(t_maps));

    if (maps == NULL)
        return (NULL);
    maps->map_a = get_map(path);
    maps->map_b = create_array();
    if (maps->map_a == NULL || maps->map_b == NULL)
        return (NULL);
    return (maps);
}