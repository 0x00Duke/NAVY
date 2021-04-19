/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-navy-leon.ducasse
** File description:
** check_error.h
*/

#ifndef ERROR_H
#define ERROR_H

#include "struct.h"
#include "maccro.h"
#include "../lib/include/lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int error(int ac, char **av);
int check_content(int fd);
int check_len_line(char *buf);
int check_if_in_list(char *list, char c);
int check_valid_car(char *buf);
int check_points(char *buf);
int check_size_num(char *buf);
int check_pos_valid(char *buf);
int same_num(char **ship);
int same_letters(char **ship);
char **to_array(char *buf, int x);
void free_arr(char **array);

#endif