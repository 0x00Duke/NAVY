/*
** EPITECH PROJECT, 2020
** navy
** File description:
** maccro
*/

#ifndef MACCRO_H
#define MACCRO_H

#define SIZE_BUF 32
#define SIZE_LINE 18
#define LINE_MAP 8
#define TIME 20000
#define MY_POS "my positions:\n"
#define MY_PID "my_pid: %d\n"
#define ENEMY_POS "\nenemy’s positions:\n"
#define ENEMY_CO "\nenemy connected\n\n"
#define WAIT "waiting for enemy connection...\n"
#define SUCCESS "succesfully connected\n\n"
#define ATTACK "\nattack: "
#define HIT "%c%d: hit\n\n"
#define MISSED "%c%d: missed\n\n"
#define WAITING "\nwaiting for enemy's attack...\n"
#define WRONG "wrong position\nattack: "
#define WIN "\nI won\n\n"
#define LOOSE "\nEnemy won\n\n"
#define INSTRUCTION "USAGE\n\t./navy [first_player_pid] navy_positions\n\
DESCRIPTION\n\tfirst_player_pid: only for the 2nd player. pid of the first\
player.\n\tnavy_positions: file representing the positions of the ships.\n"
#define START_PLAYER 1

#endif