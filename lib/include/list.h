/*
** EPITECH PROJECT, 2020
** list.h
** File description:
** list.h
*/

#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "lib.h"

typedef struct List_s
{
    int num;
    struct List_s *next;
}List_t;

List_t *create_elem(int num);
List_t *add_start(List_t *head, int num);
List_t *add_end(List_t *head, int num);
void print_list(List_t *list);
int len_list(List_t *list);

#endif