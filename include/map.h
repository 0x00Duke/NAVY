/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-navy-leon.ducasse
** File description:
** map.h
*/

#ifndef MAP_H
#define MAP_H

#include "struct.h"
#include "maccro.h"
#include "../lib/include/lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char **fill_array(char **array);
char **create_array(void);
char **get_map(char *path);
int pos_letter(char c);
char letter_from_num(int n);
char **change_char(char **map, t_coord coord);
int put_boats(char **map, char *buf);
t_maps *fill_maps(char *path);
void free_maps(t_maps *maps);

/*check_for_end*/
int is_end_game(t_maps *maps);
int check_map(char **map);

#endif