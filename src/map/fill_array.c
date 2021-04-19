/*
** EPITECH PROJECT, 2020
** navy
** File description:
** fill the array
*/

#include "map.h"

char **fill_array(char **array)
{
    array[0] = my_strdup(" |A B C D E F G H");
    array[1] = my_strdup("-+---------------");
    array[2] = my_strdup("1|. . . . . . . .");
    array[3] = my_strdup("2|. . . . . . . .");
    array[4] = my_strdup("3|. . . . . . . .");
    array[5] = my_strdup("4|. . . . . . . .");
    array[6] = my_strdup("5|. . . . . . . .");
    array[7] = my_strdup("6|. . . . . . . .");
    array[8] = my_strdup("7|. . . . . . . .");
    array[9] = my_strdup("8|. . . . . . . .");
    if (array[0] == NULL || array[1] == NULL || array[2] == NULL)
        return (NULL);
    if (array[3] == NULL || array[4] == NULL || array[5] == NULL)
        return (NULL);
    if (array[6] == NULL || array[7] == NULL || array[8] == NULL)
        return (NULL);
    if (array[9] == NULL)
        return (NULL);
    return (array);
}