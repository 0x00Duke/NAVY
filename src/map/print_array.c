/*
** EPITECH PROJECT, 2020
** navy
** File description:
** print map
*/

#include "navy.h"

void print_array(char **array)
{
    int x = 0;

    while (x < 10) {
        my_printf("%s\n", array[x]);
        x++;
    }
}