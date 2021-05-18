/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include <curses.h>
#include <dirent.h>
#include "my.h"

typedef struct s_game {
    char **tab;
    char **save;
    char *buffer;
    int fd;
    int rows;
    int cols;
    int pos_x;
    int pos_y;
    int pos_o;
    int pos_p;
    int *nbr_o;
} game_t;

void my_sokoban(char *filepath);
char **my_str_to_wordtab(char *str);
void loop_game(game_t *game);
void my_buffer_to_wordtab(game_t *map);
void get_map_size(game_t *map);
int open_read_file(game_t *map, char *filepath);
void get_objective(game_t *map);
void get_character(game_t *map);
int count_cols(game_t *map, int tmp);
int command_top(game_t *map);
int command_down(game_t *map);
int command_left(game_t *map);
int command_right(game_t *map);
void win_or_not(game_t *map);
void is_loose(game_t *map);
int check_win(char *str);
void helper(void);
int check_all_map(game_t *map);
#endif /* !SOKOBAN_H_ */
