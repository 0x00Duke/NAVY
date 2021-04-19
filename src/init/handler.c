/*
** EPITECH PROJECT, 2020
** navy
** File description:
** get the pid if you are player one
*/

#include "navy.h"

void handler(int sig, siginfo_t *info, void *ucontext)
{
    (void)ucontext;
    game_info->signum = sig;
    game_info->pid = info->si_pid;
}