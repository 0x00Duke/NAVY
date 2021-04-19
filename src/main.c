/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main.c
*/

#include "navy.h"

int main(int ac, char **av)
{
    if (error(ac, av) == 84) {
        my_printf(INSTRUCTION);
        return (84);
    }
    return (navy(ac, av));
}