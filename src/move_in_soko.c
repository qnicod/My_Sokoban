/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** move_in_soko
*/

#include "my.h"
#include "sokoban.h"

int command_top(game_t *map)
{
    if (map->tab[map->pos_y - 1][map->pos_x] == 'X'
        && map->tab[map->pos_y - 2][map->pos_x] != '#'
        && map->tab[map->pos_y - 2][map->pos_x] != 'X') {
        if (map->save[map->pos_y][map->pos_x] == 'O')
            map->tab[map->pos_y][map->pos_x] = 'O';
        else
            map->tab[map->pos_y][map->pos_x] = ' ';
        map->tab[map->pos_y - 2][map->pos_x] = 'X';
        map->tab[map->pos_y - 1][map->pos_x] = 'P';
        map->pos_y--;
    } else if (map->tab[map->pos_y - 1][map->pos_x] != 'X') {
        if (map->save[map->pos_y][map->pos_x] == 'O')
            map->tab[map->pos_y][map->pos_x] = 'O';
        else
            map->tab[map->pos_y][map->pos_x] = ' ';
        map->tab[map->pos_y - 1][map->pos_x] = 'P';
        map->pos_y--;
    }
    return (0);
}

int command_down(game_t *map)
{
    if (map->tab[map->pos_y + 1][map->pos_x] == 'X'
        && map->tab[map->pos_y + 2][map->pos_x] != '#'
        && map->tab[map->pos_y + 2][map->pos_x] != 'X') {
        if (map->save[map->pos_y][map->pos_x] == 'O')
            map->tab[map->pos_y][map->pos_x] = 'O';
        else
            map->tab[map->pos_y][map->pos_x] = ' ';
        map->tab[map->pos_y + 2][map->pos_x] = 'X';
        map->tab[map->pos_y + 1][map->pos_x] = 'P';
        map->pos_y++;
    } else if (map->tab[map->pos_y + 1][map->pos_x] != 'X') {
        if (map->save[map->pos_y][map->pos_x] == 'O')
            map->tab[map->pos_y][map->pos_x] = 'O';
        else
            map->tab[map->pos_y][map->pos_x] = ' ';
        map->tab[map->pos_y + 1][map->pos_x] = 'P';
        map->pos_y++;
    }
    return (0);
}

int command_left(game_t *map)
{
    if (map->tab[map->pos_y][map->pos_x - 1] == 'X'
        && map->tab[map->pos_y][map->pos_x - 2] != '#'
        && map->tab[map->pos_y][map->pos_x - 2] != 'X') {
        if (map->save[map->pos_y][map->pos_x] == 'O')
            map->tab[map->pos_y][map->pos_x] = 'O';
        else
            map->tab[map->pos_y][map->pos_x] = ' ';
        map->tab[map->pos_y][map->pos_x - 1] = 'P';
        map->tab[map->pos_y][map->pos_x - 2] = 'X';
        map->pos_x--;
    } else if (map->tab[map->pos_y][map->pos_x - 1] != 'X') {
        if (map->save[map->pos_y][map->pos_x] == 'O')
            map->tab[map->pos_y][map->pos_x] = 'O';
        else
            map->tab[map->pos_y][map->pos_x] = ' ';
        map->tab[map->pos_y][map->pos_x - 1] = 'P';
        map->pos_x--;
    }
    return (0);
}

int command_right(game_t *map)
{
    if (map->tab[map->pos_y][map->pos_x + 1] == 'X'
        && map->tab[map->pos_y][map->pos_x + 2] != '#'
        && map->tab[map->pos_y][map->pos_x + 2] != 'X') {
        if (map->save[map->pos_y][map->pos_x] == 'O')
            map->tab[map->pos_y][map->pos_x] = 'O';
        else
            map->tab[map->pos_y][map->pos_x] = ' ';
        map->tab[map->pos_y][map->pos_x + 1] = 'P';
        map->tab[map->pos_y][map->pos_x + 2] = 'X';
        map->pos_x++;
    } else if (map->tab[map->pos_y][map->pos_x + 1] != 'X') {
        if (map->save[map->pos_y][map->pos_x] == 'O')
            map->tab[map->pos_y][map->pos_x] = 'O';
        else
            map->tab[map->pos_y][map->pos_x] = ' ';
        map->tab[map->pos_y][map->pos_x + 1] = 'P';
        map->pos_x++;
    }
    return (0);
}
