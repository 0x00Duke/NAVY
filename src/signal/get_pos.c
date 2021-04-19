/*
** EPITECH PROJECT, 2020
** navy
** File description:
** get pos user
*/

#include "navy.h"

//t_global *game_info;

int *get_pos(void)
{
    char *input = NULL;
    long unsigned int x = 3;
    int *array = malloc(sizeof(int) * 2);

    if (array == NULL)
        return (NULL);
    my_printf(ATTACK);
    getline(&input, &x, stdin);
    while (check_if_valid_pos(input) == 84) {
        my_printf(WRONG);
        getline(&input, &x, stdin);
    }
    array[0] = pos_letter(input[0]);
    array[1] = my_getnbr(input, 1) + 1;
    return (array);
}

int check_if_valid_pos(char *input)
{
    if (my_strlen(input) != 3)
        return (84);
    if (check_if_in_list("ABCDEFGH", input[0]) == 1
    || check_if_in_list("12345678", input[1]) == 1)
        return (84);
    return (0);
}