/*
** EPITECH PROJECT, 2020
** navy
** File description:
** receive signal
*/

#include "navy.h"

t_global *game_info;

int receive(t_maps *maps)
{
    int *result = malloc(sizeof(int) * 2);

    my_printf(WAITING);
    if (result == NULL)
        return (84);
    pause();
    result = catch_sig(result);
    check_hit(result, maps);
    free(result);
    return (0);
}

void check_hit(int *result, t_maps *maps)
{
    if (check_if_hit(result, maps) == 1) {
        send_hit();
        my_printf(MISSED, letter_from_num(result[1]), result[0] - 1);
    } else {
        send_miss();
        my_printf(HIT, letter_from_num(result[1]), result[0] - 1);
    }
}

void send_hit(void)
{
    game_info->signum = SIGUSR1;
    kill(game_info->pid, SIGUSR1);
    usleep(TIME);
    kill(game_info->pid, SIGUSR1);
    usleep(TIME);
    kill(game_info->pid, SIGUSR2);
}

void send_miss(void)
{
    game_info->signum = SIGUSR1;
    kill(game_info->pid, SIGUSR1);
    usleep(TIME);
    kill(game_info->pid, SIGUSR2);
}