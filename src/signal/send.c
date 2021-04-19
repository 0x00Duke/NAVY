/*
** EPITECH PROJECT, 2020
** navy
** File description:
** send signal
*/

#include "navy.h"

int send_signal(t_maps *maps)
{
    int *pos = get_pos();
    int x = 0;

    if (pos == NULL)
        return (84);
    while (x != pos[0]) {
        kill(game_info->pid, SIGUSR1);
        usleep(TIME);
        x++;
    }
    kill(game_info->pid, SIGUSR2);
    x = 0;
    while (x != pos[1]) {
        kill(game_info->pid, SIGUSR2);
        usleep(TIME);
        x++;
    }
    kill(game_info->pid, SIGUSR1);
    receive_if_hit(maps, pos);
    return (0);
}

void receive_if_hit(t_maps *maps, int *pos)
{
    int count = 0;
    game_info->signum = SIGUSR1;
    pause();
    while (game_info->signum == SIGUSR1) {
        pause();
        count++;
    }
    if (count == 1) {
        maps->map_b[pos[1]][pos[0]] = 'x';
        my_printf(HIT, letter_from_num(pos[0]), pos[1] - 1);
    } else {
        maps->map_b[pos[1]][pos[0]] = 'o';
        my_printf(MISSED, letter_from_num(pos[0]), pos[1] - 1);
    }
}