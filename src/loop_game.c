/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** loop_game
*/

#include "sokoban.h"
#include <curses.h>
#include "my.h"

static void init_keypad(game_t *map, int command)
{
    if (command == 27) {
        endwin();
        exit(1);
    }
    if (command == KEY_UP && map->tab[map->pos_y - 1][map->pos_x] != '#')
        command_top(map);
    if (command == KEY_DOWN && map->tab[map->pos_y + 1][map->pos_x] != '#')
        command_down(map);
    if (command == KEY_LEFT && map->tab[map->pos_y][map->pos_x - 1] != '#')
        command_left(map);
    if (command == KEY_RIGHT && map->tab[map->pos_y][map->pos_x + 1] != '#')
        command_right(map);
}

void loop_game(game_t *game)
{
    int command;

    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    refresh();
    while (1) {
        clear();
        for (int rows = 0; rows < game->rows; rows++)
            mvprintw(rows, 0, "%s", game->tab[rows]);
        command = getch();
        init_keypad(game, command);
        refresh();
    }
    curs_set(1);
    endwin();
}