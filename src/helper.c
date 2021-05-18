/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** helper
*/

#include "my.h"

void helper(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      map  file representing ");
    my_putstr("the warehouse map, containing '#' for walls,\n");
    my_putstr("           'P' for the player, 'X' for boxes");
    my_putstr(" and 'O' for storage locations.\n");
}