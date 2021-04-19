/*
** EPITECH PROJECT, 2020
** navy
** File description:
** struct
*/

#ifndef STRUCT_H
#define STRUCT_H

#include <stdbool.h>
#include <signal.h>

typedef struct s_maps {
    char **map_a;
    char **map_b;
}t_maps;

typedef struct s_coord {
    char c;
    int xa;
    int xb;
    int ya;
    int yb;
} t_coord;

typedef struct s_global {
    pid_t pid;
    int signum;
}t_global;

extern t_global *game_info;

#endif