/*
** EPITECH PROJECT, 2020
** navy
** File description:
** connection
*/

#include "navy.h"

int connection(int ac, char **av)
{
    struct sigaction *sa = malloc(sizeof(struct sigaction));

    if (init_global(ac, av) == 84 || sa == NULL || init_sigaction(sa) == 84)
        return (84);
    if (ac == 2) {
        my_printf(WAIT);
        if (sigaction(SIGUSR1, sa, NULL) == -1)
            return (84);
    } else {
        my_printf(SUCCESS);
        kill(my_getnbr(av[1], 0), SIGUSR1);
    }
    return (0);
}