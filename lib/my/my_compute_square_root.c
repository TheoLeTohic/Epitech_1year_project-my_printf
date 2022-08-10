/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c 
** File description:
** task05
*/

#include "../../include/my.h"

int my_compute_square_root(int nb)
{
    int i = 0;
    int imp = 1;

    while (nb > 0) {
        nb = nb - imp;
        imp = imp + 2;
        i++;
    }
    if (nb != 0) {
        return (0);
    } else {
        return i;
    }
}
