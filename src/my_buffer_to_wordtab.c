/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** get_map
*/

#include "my.h"
#include "sokoban.h"

int count_cols(game_t *map, int tmp)
{
    int count = 0;

    while (map->buffer[tmp] != '\n' && map->buffer[tmp] != '\0') {
        tmp++;
        count++;
    }
    return (count);
}

void my_buffer_to_wordtab(game_t *map)
{
    int x = 0;
    int y = 0;
    int size = 0;

    map->tab = malloc(sizeof(char *) * (map->rows) + 1);
    map->save = malloc(sizeof(char *) * (map->rows) + 1);
    for (; x < map->rows; x++) {
        map->cols = count_cols(map, size);
        map->tab[x] = malloc(sizeof(char) * (map->cols) + 1);
        map->save[x] = malloc(sizeof(char) * (map->cols) + 1);
        for (y = 0; y < map->cols; y++) {
            map->tab[x][y] = map->buffer[size];
            map->save[x][y] = map->buffer[size];
            size++;
        }
        size++;
    }
}