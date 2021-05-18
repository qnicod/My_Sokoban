/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-quentin.nicod
** File description:
** main
*/

#include "my.h"
#include "sokoban.h"

int main(int ac, char **av)
{
    (void)ac;
    if (ac != 2 || !DT_REG)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        helper();
    else
        my_sokoban(av[1]);
    return (0);
}
