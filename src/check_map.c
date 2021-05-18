/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** check_map
*/

#include "sokoban.h"

int check_all_map(game_t *map)
{
    for (int i = 0; map->buffer[i];) {
        if (map->buffer[i] == 'P' || map->buffer[i] == 'O'
            || map->buffer[i] == 'X' || map->buffer[i] == ' '
            || map->buffer[i] == '\n' || map->buffer[i] == '#'
            || map->buffer[i] == '\0')
            i++;
        else {
            write(2, "Error: not a valid map!\n", 26);
            exit(84);
        }
    }
    return (0);
}
