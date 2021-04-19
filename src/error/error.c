/*
** EPITECH PROJECT, 2020
** navy
** File description:
** error check
*/

#include "check_error.h"

int error(int ac, char **av)
{
    int fd;

    if (ac == 1 || ac > 3)
        return (84);
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return (84);
    if (ac == 2 && open(av[1], O_RDONLY) == -1)
        return (84);
    if (ac == 3 && open(av[2], O_RDONLY) == -1)
        return (84);
    if (ac == 2)
        fd = open(av[1], O_RDONLY);
    else
        fd = open(av[2], O_RDONLY);
    if (check_content(fd) == 84)
        return (84);
    return (0);
}

int check_content(int fd)
{
    char *buf = malloc(sizeof(char) * SIZE_BUF + 1);
    int read_value = read(fd, buf, SIZE_BUF);

    if (buf == NULL || read_value != SIZE_BUF)
        return (84);
    buf[SIZE_BUF] = '\0';
    if (check_len_line(buf) == 84 || check_valid_car(buf) == 84 ||
    check_points(buf) == 84)
        return (84);
    if (check_size_num(buf) == 84 || check_pos_valid(buf) == 84)
        return (84);
    close(fd);
    free(buf);
    return (0);
}
