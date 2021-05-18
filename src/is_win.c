/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** is_win
*/

#include "my.h"
#include "sokoban.h"

static int is_win(game_t *map, int rows, int cols)
{
    if (map->tab[rows][cols] == 'X' && map->save[rows][cols] == 'O')
        map->nbr_o++;
    return (map->nbr_o);
}

void win_or_not(game_t *map)
{
    int win = 0;

    map->nbr_o = 0;
    for (int count_x = 0; count_x != map->rows; count_x++) {
        for (int count_y = 0; map->tab[count_x][count_y] != '\n'; count_y++)
            win += is_win(map, count_x, count_y);
        if (map->nbr_o == win) {
            endwin();
            exit(0);
        }
    }
}
