/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-navy-leon.ducasse
** File description:
** catch_sig.c
*/

#include "navy.h"

int *catch_sig(int *result)
{
    result[0] = 0;
    result[1] = 0;

    while (game_info->signum == SIGUSR1) {
        pause();
        result[1]++;
    }
    while (game_info->signum == SIGUSR2) {
        pause();
        result[0]++;
    }
    return (result);
}