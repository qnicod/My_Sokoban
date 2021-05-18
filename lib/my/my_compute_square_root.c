/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** calculate the root sqare of a whole nb
*/

int my_compute_square_root(int nb)
{
    int power = 0;

    if (nb == 0)
        return (0);
    if (nb < 0)
        return (0);
    while (power * power != nb) {
        power++;
        if (power > nb)
            return (0);
    }
    return (power);
}
