/*
** EPITECH PROJECT, 2020
** navy
** File description:
** error check
*/

#include "check_error.h"
#include <stdlib.h>

int check_pos_valid(char *buf)
{
    int x = 0;
    int err = 0;
    char **ship;

    while (x <= 24) {
        ship = to_array(buf, x);
        if (ship == NULL)
            return (84);
        if (ship[1][0] == ship[2][0])
            err = same_letters(ship);
        else if (ship[1][1] == ship[2][1])
            err = same_num(ship);
        else
            return (84);
        if (err == 84)
            return (84);
        x += 8;
        free_arr(ship);
    }
    return (0);
}

int same_num(char **ship)
{
    if (ship[1][0] == ship[2][0])
        return (84);
    if (ship[1][0] < ship[2][0])
        if (my_getnbr(ship[0], 0) + ship[1][0] - 1 != ship[2][0])
            return (84);
    if (ship[1][0] > ship[2][0])
        if (ship[1][0] - my_getnbr(ship[0], 0) + 1 != ship[2][0])
            return (84);
    return (0);
}

int same_letters(char **ship)
{
    int size = my_getnbr(ship[0], 0);
    int pos1 = my_getnbr(ship[1], 1);
    int pos2 = my_getnbr(ship[2], 1);

    if (pos1 == pos2)
        return (84);
    if (pos1 < pos2)
        if (size + pos1 - 1 != pos2)
            return (84);
    if (pos1 > pos2)
        if (size - pos1 + 1 != pos2)
            return (84);
    return (0);
}

char **to_array(char *buf, int x)
{
    char **array = malloc(sizeof(char *) * 4);
    array[0] = malloc(2);
    array[1] = malloc(3);
    array[2] = malloc(3);

    if (array == NULL || array[0] == NULL || array[1] == NULL ||
    array[2] == NULL)
        return (NULL);
    array[0][0] = buf[x];
    array[0][1] = '\0';
    array[1][0] = buf[x + 2];
    array[1][1] = buf[x + 3];
    array[1][2] = '\0';
    array[2][0] = buf[x + 5];
    array[2][1] = buf[x + 6];
    array[2][2] = '\0';
    array[3] = NULL;
    return (array);
}

void free_arr(char **array)
{
    int x = 2;

    while (x != -1) {
        free(array[x]);
        x--;
    }
    free(array);
}