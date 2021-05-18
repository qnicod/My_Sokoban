/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** open_read_file
*/

#include "my.h"
#include "sokoban.h"

int open_read_file(game_t *map, char *filepath)
{
    char *tmp_buffer = malloc(sizeof(char));
    int tmp_fd = open(filepath, O_RDONLY);
    int count = 0;

    if (tmp_fd < 0 || tmp_buffer == NULL)
        return (84);
    for (count = 0; read(tmp_fd, tmp_buffer, 1); count++);
    close (tmp_fd);
    map->fd = open(filepath, O_RDONLY);
    map->buffer = malloc((sizeof(char) * count));
    read(map->fd, map->buffer, count);
    map->buffer[count] = '\0';
    close(map->fd);
    return (0);
}
