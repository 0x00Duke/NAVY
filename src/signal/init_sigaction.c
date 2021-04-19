/*
** EPITECH PROJECT, 2020
** navy
** File description:
** init the sigaction struct
*/

#include "navy.h"

//t_<global *game_info;

int init_sigaction(struct sigaction *sa)
{
    sigemptyset(&sa->sa_mask);
    sa->sa_flags = SA_SIGINFO;
    sa->sa_sigaction = &handler;
    if (sigaction(SIGUSR1, sa, NULL) == -1 ||
    sigaction(SIGUSR2, sa, NULL) == -1)
        return (84);
    return (0);
}