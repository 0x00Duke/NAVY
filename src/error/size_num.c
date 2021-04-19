/*
** EPITECH PROJECT, 2020
** navy
** File description:
** error check
*/

#include "check_error.h"
#include <stdio.h>

int check_size_num(char *buf)
{
    char *num = malloc(6);
    num[0] = 0;
    int i = 0;
    int x = 0;

    if (num == NULL)
        return (84);
    while (x <= 24) {
        if (check_if_in_list(num, buf[x]) == 0 ||
        check_if_in_list("2345", buf[x]) == 1)
            return (84);
        num[i] = buf[x];
        num[i + 1] = '\0';
        i++;
        x += 8;
    }
    free(num);
    return (0);
}
