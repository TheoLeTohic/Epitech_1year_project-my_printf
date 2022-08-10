/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** task06
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    for (int z = 2; z < nb; z++) {
        if ((nb % z) == 0) {
            return 0;
        }
    }
    return 1;
}
