/*
** EPITECH PROJECT, 2020
** navy
** File description:
** error check
*/

#include "check_error.h"

int check_len_line(char *buf)
{
    int x = 7;

    while (x != 31) {
        if (buf[x] != '\n')
            return (84);
        x += 8;
    }
    return (0);
}

int check_valid_car(char *buf)
{
    int x = 0;

    while (buf[x]) {
        if (check_if_in_list("123456789ABCDEFGH:\n", buf[x]) == 1)
            return (84);
        x++;
    }
    return (0);
}

int check_if_in_list(char *list, char c)
{
    int x = 0;

    while (list[x]) {
        if (list[x] == c)
            return (0);
        x++;
    }
    return (1);
}

int check_points(char *buf)
{
    int x = 1;
    int y = 4;

    while (x <= 25) {
        if (buf[x] != ':' || buf[y] != ':')
            return (84);
        x += 8;
        y += 8;
    }
    return (0);
}