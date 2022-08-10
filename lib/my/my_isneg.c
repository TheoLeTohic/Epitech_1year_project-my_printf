/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** task04
*/

#include "../../include/my.h"

void my_putchar(char c);

int my_isneg (int n)
{
    if (n < 0) {
        my_putchar(78);
    } else {
        my_putchar(80);
    }
    return (0);
}
