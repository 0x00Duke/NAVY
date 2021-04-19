/*
** EPITECH PROJECT, 2020
** navy
** File description:
** pos from letter
*/

#include "map.h"

int pos_letter(char c)
{
    if (c == 'A')
        return (2);
    if (c == 'B')
        return (4);
    if (c == 'C')
        return (6);
    if (c == 'D')
        return (8);
    if (c == 'E')
        return (10);
    if (c == 'F')
        return (12);
    if (c == 'G')
        return (14);
    if (c == 'H')
        return (16);
    return (0);
}

char letter_from_num(int n)
{
    if (n == 2)
        return ('A');
    if (n == 4)
        return ('B');
    if (n == 6)
        return ('C');
    if (n == 8)
        return ('D');
    if (n == 10)
        return ('E');
    if (n == 12)
        return ('F');
    if (n == 14)
        return ('G');
    if (n == 16)
        return ('H');
    return ('r');
}