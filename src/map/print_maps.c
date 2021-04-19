/*
** EPITECH PROJECT, 2020
** navy
** File description:
** print the maps
*/

#include "navy.h"

void print_maps(t_maps *maps)
{
    my_printf(MY_POS);
    print_array(maps->map_a);
    my_printf(ENEMY_POS);
    print_array(maps->map_b);
}