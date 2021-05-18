/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** get_info
*/

#include "my.h"
#include "sokoban.h"

void get_map_size(game_t *map)
{
    int count_x = 0;
    int count_y = 0;
    int tmp = 0;

    for (; map->buffer[tmp] != '\n'; tmp++)
        map->cols = tmp;
    for (; map->buffer[count_x] != '\0'; count_x++)
        if (map->buffer[count_x] == '\n')
            count_y++;
    if (map->buffer[count_x] != '\n')
        count_y++;
    map->rows = count_y;
}

void get_objective(game_t *map)
{
    int count_x = 0;
    int count_y = 0;

    for (; map->buffer[count_x]; count_x++)
        if (map->buffer[count_x] == 'O')
            count_y++;
    count_x = 0;
    map->pos_o = count_y;
}

void get_character(game_t *map)
{
    int count_x = 0;
    int count_y = 0;
    int size = 0;

    for (; count_x != map->rows; count_x++) {
        map->cols = count_cols(map, size);
        for (; count_y != map->cols; count_y++) {
            if (map->tab[count_x][count_y] == 'P') {
                map->pos_x = count_y;
                map->pos_y = count_x;
                map->pos_p++;
            }
            size++;

        }
        size++;
        count_y = 0;
    }
}
