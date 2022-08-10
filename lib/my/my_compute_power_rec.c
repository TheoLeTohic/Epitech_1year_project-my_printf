/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** task04
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
