/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** my_sokoban
*/

#include "my.h"
#include "sokoban.h"

void my_sokoban(char *filepath)
{
    game_t *map = malloc(sizeof(game_t));

    if (map == NULL)
        return;
    open_read_file(map, filepath);
    get_map_size(map);
    get_objective(map);
    check_all_map(map);
    my_buffer_to_wordtab(map);
    get_character(map);
    loop_game(map);
}