/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main.c
*/

#ifndef NAVY_H
#define NAVY_H

#include "../lib/include/lib.h"
#include "struct.h"
#include "maccro.h"
#include "map.h"
#include "check_error.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <signal.h>


int navy(int ac, char **av);
int game_loop(t_maps *maps, int player);


/*          printing            */
void print_array(char **array);
void print_maps(t_maps *maps);
void print_end(t_maps *maps);
/*                              */

/*          signals             */
/*  init  */
void handler(int sig, siginfo_t *info, void *ucontext);
int init_global(int ac, char **av);
int init_sigaction(struct sigaction *sa);
/*       */

/*get_info*/
int *get_pos(void);
int check_if_valid_pos(char *input);
int check_if_hit(int *pos, t_maps *maps);
void check_hit(int *result, t_maps *maps);
int *catch_sig(int *result);
/*       */

int connection(int ac, char **av);
int send_signal(t_maps *maps);
int receive(t_maps *maps);

void send_hit(void);
void send_miss(void);

void receive_if_hit(t_maps *maps, int *pos);
/*                             */





#endif