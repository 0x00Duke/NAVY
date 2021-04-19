/*
** EPITECH PROJECT, 2020
** navy
** File description:
** create the array
*/

#include "map.h"

char **create_array(void)
{
    char **array = malloc(sizeof(char *) * 11);

    if (array == NULL)
        return (NULL);
    array[10] = NULL;
    array = fill_array(array);
    return (array);
}