/*
** EPITECH PROJECT, 2020
** navy
** File description:
** get map
*/

#include "map.h"

char **get_map(char *path)
{
    int fd = open(path, O_RDONLY);
    char *buf = malloc(sizeof(char) * 33);
    int read_value = read(fd, buf, 32);
    char **map = create_array();
    int x;

    if (fd == -1 || buf == NULL || read_value != 32 || map == NULL)
        return (NULL);
    buf[32] = '\0';
    x = put_boats(map, buf);
    if (x == 84)
        return (NULL);
    return (map);
}
