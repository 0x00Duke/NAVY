/*
** EPITECH PROJECT, 2020
** navy
** File description:
** lib.h
*/

#ifndef LIB_H
#define LIB_H

#include "printf.h"

int my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_putnbr_base(int nbr, char *base);
int my_put_unsigned_nbr(unsigned int nb);
char *my_strlowcase(char *str);
char *my_strdup(char const *src);
int my_getnbr(char const *str, int i);

#endif